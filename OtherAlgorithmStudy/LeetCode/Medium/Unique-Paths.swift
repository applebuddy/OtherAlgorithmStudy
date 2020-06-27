//
//  Unique-Paths.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/14.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Unique-Paths

// MARK: DP 문제풀이

/*
 import Foundation

 class Solution {
 func uniquePaths(_ m: Int, _ n: Int) -> Int {
     var DP = [[Int]](repeating: [Int](repeating: 0, count: n+1), count: m+1)
     DP[1][0] = 1
     for i in 1...m {
         for j in 1...n {
             DP[i][j] = DP[i-1][j] + DP[i][j-1]
         }
     }
     return DP[m][n]
 }
 }
 */
