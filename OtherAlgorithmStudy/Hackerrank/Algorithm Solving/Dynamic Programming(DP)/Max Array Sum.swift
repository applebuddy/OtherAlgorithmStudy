//
//  Max Array Sum.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - MaxSubSetSum

// MARK: 인접하지 않는 숫자들의 최대합을 구해라!!

import Foundation

// Reviewing Problem
func maxSubsetSum(arr: [Int]) -> Int {
    var ans = arr
    if ans.count == 0 { return 0 }
    ans[0] = max(0, ans[0])
    if ans.count == 1 { return ans[0] }
    ans[1] = max(ans[0], ans[1])

    for i in 2 ..< ans.count {
        ans[i] = max(ans[i - 1], ans[i - 2] + ans[i])
    }
    return ans.last!
}

// func maxSubsetSum(arr: [Int]) -> Int {
//    var dp = arr
//    if dp.count == 0 { return 0 }
//    dp[0] = max(0, dp[0])
//    if dp.count == 1 { return dp[0] }
//    dp[1] = max(dp[0], dp[1])
//
//    for i in 2 ..< dp.count {
//        dp[i] = max(dp[i - 1], dp[i] + dp[i - 2])
//    }
//    return dp[dp.count - 1]
// }
