
// MARK: - Best Time to Buy and Sell Stock 2

// - O(N) Time-Complexity 문제풀이 / TC: 88.72%, SC: 86.36%

/*
func maxProfit(_ prices: [Int]) -> Int {
    var min = prices[0], profit = 0
    var Ans = 0
    for i in 1..<prices.count {
        if prices[i-1] < prices[i] {
            profit = prices[i] - min
        } else {
            Ans += profit
            profit = 0
            min = prices[i]
        }
    }
    Ans += profit
    return Ans
}
*/
