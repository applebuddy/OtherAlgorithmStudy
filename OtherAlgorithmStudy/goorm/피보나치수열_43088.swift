//
//  피보나치수열_43088.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 피보나치수열 43088
// MARK: swift 문제풀이
/*
import Foundation

let N = Int(readLine()!)!
var DP = [Int](repeating: 1, count: N+1)
var Ans = 0
for i in 1...N {
        if i >= 3 {
                DP[i] = DP[i-1] + DP[i-2]
        }
        Ans += DP[i]
}

print(Ans)
*/
