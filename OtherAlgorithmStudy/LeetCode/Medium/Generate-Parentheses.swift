
// MARK: - Generate Parentheses

// MARK: DFS swift 문제풀이

/*
 Runtime: 12 ms, faster than 95.98% of Swift online submissions for Generate Parentheses.
 Memory Usage: 21.2 MB, less than 43.78% of Swift online submissions for Generate Parentheses.
 */

class Solution {
    private var SV = [String]()
    private var answer = [String]()

    private func getBrace(_ open: Int, _ close: Int) {
        if open == 0 {
            answer.append((SV + [String](repeating: ")", count: close)).joined())
            return
        }

        SV.append("(")
        getBrace(open - 1, close)
        SV.removeLast()

        if open < close {
            SV.append(")")
            getBrace(open, close - 1)
            SV.removeLast()
        }
    }

    func generateParenthesis(_ n: Int) -> [String] {
        getBrace(n, n)
        return answer
    }
}
