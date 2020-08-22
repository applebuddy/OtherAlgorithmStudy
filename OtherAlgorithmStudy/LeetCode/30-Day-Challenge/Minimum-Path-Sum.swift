
// MARK: - Minimum Path Sum

// MARK: DP swift 문제풀이

class Solution {
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
