
// MARK: - Maximum Swap

// MARK: Greedy swift 문제풀이

extension Character {
    func asciiInt() -> Int {
        return Int(asciiValue! - 48)
    }
}

class Solution {
    func maximumSwap(_ num: Int) -> Int {
        var arr = Array(String(num))
        var last = [Int](repeating: 0, count: 10)
        var idx = 0
        arr.forEach {
            last[$0.asciiInt()] = idx
            idx += 1
        }

        for (key, char) in arr.enumerated() {
            var nowValue = 9
            while nowValue > char.asciiInt() {
                if last[nowValue] > key {
                    arr.swapAt(key, last[nowValue])
                    return arr.reduce(into: 0) { $0 = $0 * 10 + $1.asciiInt() }
                }

                nowValue -= 1
            }
        }

        return num
    }
}
