
// MARK: - Last Stone Weight

// MARK: binarySearch swift 문제풀이

class LastStoneWeihgt {
    func lastStoneWeight(_ stones: [Int]) -> Int {
        var stoneList = stones
        return stoneList.getAnswer()
    }
}

extension Array where Element == Int {
    mutating func getAnswer() -> Int {
        sort()
        while count > 1 {
            var lastIdx = count - 1
            let diff = self[lastIdx] - self[lastIdx - 1]
            removeLast()
            removeLast()
            if isEmpty { return diff }
            if diff == 0 { continue }

            lastIdx = count - 1
            var left = 0, right = lastIdx
            while left <= right {
                let mid = (left + right) / 2
                if self[mid] < diff {
                    left = mid + 1
                } else {
                    right = mid - 1
                }
            }

            insert(diff, at: right + 1)
        }

        return first!
    }
}

