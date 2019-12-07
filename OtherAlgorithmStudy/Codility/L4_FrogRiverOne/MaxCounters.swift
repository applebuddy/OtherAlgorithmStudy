
// MARK: MaxCounters

import Foundation

public func solution(_ N: Int, _ A: inout [Int]) -> [Int] {
    var Ans = [Int](repeating: 0, count: N)
    var MAX = 0, rMAX = 0

    for i in A.indices {
        if A[i] != N + 1 {
            if Ans[A[i] - 1] < rMAX { Ans[A[i] - 1] = rMAX }
            Ans[A[i] - 1] += 1
            MAX = Ans[A[i] - 1] > MAX ? Ans[A[i] - 1] : MAX
        } else {
            rMAX = MAX
        }
    }

    for i in Ans.indices {
        if Ans[i] < rMAX { Ans[i] = rMAX }
    }

    return Ans
}
