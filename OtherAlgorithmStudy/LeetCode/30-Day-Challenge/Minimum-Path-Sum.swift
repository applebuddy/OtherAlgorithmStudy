
// MARK: - Minimum Path Sum

// MARK: DP swift 문제풀이

// - 200829) 복습 문제풀이
class Solution {
    func minPathSum(_ grid: [[Int]]) -> Int {
        var DP = grid
        for idx in grid.indices {
            for jdx in grid[idx].indices {
                if idx == 0, jdx == 0 { continue }
                var one = Int.max, two = Int.max
                if idx > 0 {
                    one = DP[idx - 1][jdx]
                }

                if jdx > 0 {
                    two = DP[idx][jdx - 1]
                }

                DP[idx][jdx] += one < two ? one : two
            }
        }

        return DP.last!.last!
    }
}

class Solution2 {
    func minPathSum(_ grid: [[Int]]) -> Int {
        var DP = grid
        for idx in grid.indices {
            for jdx in grid[idx].indices {
                if idx == 0, jdx == 0 { continue }
                var result = Int.max
                if idx - 1 >= 0 {
                    let target = DP[idx][jdx] + DP[idx - 1][jdx]
                    result = target
                }

                if jdx - 1 >= 0 {
                    let target = DP[idx][jdx] + DP[idx][jdx - 1]
                    result = target < result ? target : result
                }

                DP[idx][jdx] = result
            }
        }

        return DP.last!.last!
    }
}
