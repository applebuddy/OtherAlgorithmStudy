
// MARK: - Smallest Subsequence of Distinct Characters

// MARK: TLE 답안

class Solution {
    var answer = 0
    var dic = [Int: [[String]]]()

    func smallestSubsequence(_ text: String) -> String {
        var arr = Array(text).map { String($0) }
        var chkArr = [String]()

        getDFS(&arr, &chkArr, 0, [])

        return dic[answer] == nil ? "" : dic[answer]!.map { $0.joined() }.sorted().first!
    }

    func getDFS(_ arr: inout [String], _ chkArr: inout [String], _ idx: Int, _ ST: Set<String>) {
        if idx >= arr.count || answer > chkArr.count + (arr.count - idx) { return }

        var nextST = ST
        if !ST.contains(arr[idx]) {
            nextST.insert(arr[idx])
            chkArr.append(arr[idx])
            if ST.count >= answer {
                answer = ST.count
                if dic[answer] != nil {
                    dic[answer]!.append(chkArr)
                } else {
                    dic[answer] = [chkArr]
                }
            }

            getDFS(&arr, &chkArr, idx + 1, nextST)
            chkArr.removeLast()
        }

        getDFS(&arr, &chkArr, idx + 1, ST)
    }
}
