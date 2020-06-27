//
//  TopKFrequentElements.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Top-K-Frequent-Elements

// MARK: - 문제풀이

/*
 import Foundation

 class Solution {
 func topKFrequent(_ nums: [Int], _ k: Int) -> [Int] {
     var dic = [Int:Int]()
     var FV = [(Int,Int)]()
     var Ans = [Int]()
     for i in nums.indices {
         dic[nums[i]] = (dic[nums[i]] ?? 0) + 1
     }

     for d in dic {
         FV.append((d.key, d.value))
     }

     FV.sort {
         $0.1 > $1.1
     }

     for i in 0..<k {
         Ans.append(FV[i].0)
     }

     return Ans
 }
 }
 */
