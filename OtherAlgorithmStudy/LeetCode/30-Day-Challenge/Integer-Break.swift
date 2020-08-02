
// MARK: - Integer Break

func nPow(_ N: Int, _ K: Int) -> Int {
    if K == 0 { return 0 }
    var result = 1
    var flag = N
    var k = K
    while k > 0 {
        if k % 2 == 0 {
            flag *= flag
            k /= 2
        } else {
            result *= flag
            k -= 1
        }
    }

    return result
}

func integerBreak(_ n: Int) -> Int {
    var Ans = n - 1
    if n <= 2 { return 1 }
    for i in 2 ... max(2, n / 2) {
        var now = 0
        if n % i == 0 {
            now = nPow(i, n / i)
        } else {
            now = nPow(i, n / i) * (n % i)
            let tmp = nPow(i, n / i - 1) * (n % i + i)
            now = now < tmp ? tmp : now
        }
        Ans = Ans < now ? now : Ans
    }
    return Ans
}
