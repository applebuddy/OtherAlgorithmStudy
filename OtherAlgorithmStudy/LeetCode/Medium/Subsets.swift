//
//  Subsets.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/06/27.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Subsets

// - DFS swift 문제풀이

/*
 class Solution {
 var Ans = [[Int]]()
 var result = [Int]()

 func DFS(_ nums: inout [Int], _ index: Int) {
     if index >= nums.count {
         Ans.append(result)
         return
     }

     result.append(nums[index])
     DFS(&nums, index+1)
     result.removeLast()
     DFS(&nums, index+1)
 }

 func subsets(_ nums: [Int]) -> [[Int]] {
     var nums = nums
     DFS(&nums, 0)
     return Ans
 }
 }
 */
