
// MARK: - Happy Number

func isHappy(_ n: Int) -> Bool {
    var N = n
    var hash: [Int: Bool] = [:]
    while N != 1 {
        var tN = N
        var sum = 0
        while tN > 0 {
            sum += (tN % 10) * (tN % 10)
            tN /= 10
        }

        if sum == 1 { return true }
        else if hash[sum] != nil { return false }
        hash[sum] = true
        N = sum
    }
    return true
}
