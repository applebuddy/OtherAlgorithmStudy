
// MARK: - Valid Parenthesis String
// MARK: - TC 90.24% ~ 100% / SC 23% ~ 51.22% / Stack 문제풀이

class Solution {
    func checkValidString(_ s: String) -> Bool {
        var stk = [Int]()
        var stk2 = [Int]()
        var idx = 0
        for value in s {
            if value == "*" {
                stk2.append(idx)
            } else if value == "(" {
                stk.append(idx)
            } else {
                if stk.isEmpty {
                    if stk2.isEmpty { return false }
                    else { stk2.removeLast() }
                } else { stk.removeLast() }
            }
            idx += 1
        }

        if stk.count > stk2.count { return false }

        while !stk.isEmpty {
            if !stk2.isEmpty, stk.last! < stk2.last! {
                stk.removeLast()
                stk2.removeLast()
            } else { break }
        }

        return stk.isEmpty
    }
}
