//
//  Count-Number-of-Nice-Subarrays.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Count-Number-of-Nice-Subarrays

/*
 import Foundation

 class Solution {
 func numberOfSubarrays(_ nums: [Int], _ k: Int) -> Int {
     var DP = [Int](repeating: 0, count: nums.count+1)
     DP[0] = 1
     var idx = 0, Ans = 0
     for i in nums.indices {
         idx += nums[i] & 1
         DP[idx] += 1
         if idx >= k {
             Ans += DP[idx-k]
         }
     }
     return Ans
 }
 }
 */
