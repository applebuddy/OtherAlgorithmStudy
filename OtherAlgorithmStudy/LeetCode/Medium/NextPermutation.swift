//
//  File.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/13.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Next Permutation 문제풀이

import Foundation

/*
 class Solution {
 func nextPermutation(_ nums: inout [Int]) {
     if nums.count <= 1 { return }
     var N = nums.count
     var i = N - 1, j = N - 1
     while i > 0 && nums[i-1] >= nums[i] { i -= 1 }
     if i <= 0 {
         i = 0
         j = N - 1
     }
     else {
         while j > 0 && nums[i-1] >= nums[j] { j -= 1 }
         nums.swapAt(i-1, j)
         j = N-1
     }
     while(i<j) {
         nums.swapAt(i, j)
         i += 1
         j -= 1
     }
 }
 }
 */
