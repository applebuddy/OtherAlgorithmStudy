
// MARK: - Backspace String Compare

// MARK: swift 문제풀이
/*
func getResult(_ input: [Character]) -> [Character] {
    var result = [Character]()
    for s in input {
        if s == "#" {
            if !result.isEmpty {
                result.removeLast()
            }
        } else {
            result.append(s)
        }
    }

    return result
}

func backspaceCompare(_ S: String, _ T: String) -> Bool {
    var sArr = Array(S)
    var tArr = Array(T)
    return getResult(sArr) == getResult(tArr)
}
*/
