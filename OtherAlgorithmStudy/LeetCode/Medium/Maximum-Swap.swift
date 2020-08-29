
// MARK: - Maximum Swap

// MARK: Greedy swift 문제풀이

extension Character {
    func asciiInt() -> Int {
        return Int(asciiValue! - 48)
    }
}

// - 복습 문제풀이 (처음부터 각자리 수 Int타입으로 구해서 풀이)
class Solution {
    func maximumSwap(_ num: Int) -> Int {
        var lastDic = [Int](repeating: 0, count: 10)
        var numArray = Array(String(num)).map { Int($0.asciiValue! - 48) }
        for idx in numArray.indices {
            lastDic[numArray[idx]] = idx
        }

        for idx in numArray.indices {
            var value = 9
            while value > numArray[idx] {
                if lastDic[value] > idx {
                    numArray.swapAt(idx, lastDic[value])
                    return numArray.reduce(into: 0) { $0 = $0 * 10 + $1 }
                }
                value -= 1
            }
        }

        return num
    }
}

/*
 class Solution2 {
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
 */
