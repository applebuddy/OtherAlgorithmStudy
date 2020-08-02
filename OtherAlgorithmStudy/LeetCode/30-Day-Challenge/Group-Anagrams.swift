
// MARK: - Group Anagrams

// MARK: Hash 문제풀이
/*
func groupAnagrams(_ strs: [String]) -> [[String]] {
    var dic: [[Int]: [String]] = [:]

    for str in strs {
        var cnt = [Int](repeating: 0, count: 26)
        for s in str {
            let ascii = Int(s.asciiValue! - 97)
            cnt[ascii] += 1
        }

        if dic[cnt] == nil {
            dic[cnt] = [str]
        } else {
            dic[cnt]!.append(str)
        }
    }

    var Ans = [[String]]()
    for d in dic {
        Ans.append(d.value)
    }

    return Ans
}
*/
