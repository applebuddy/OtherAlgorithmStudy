//
//  MaximumSubarray.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/07/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

func maxSubArray(_ nums: [Int]) -> Int {
    var Ans = Int.min
    var sum = 0
    for i in nums.indices {
        sum += nums[i]
        Ans = Ans < sum ? sum : Ans
        if sum < 0 { sum = 0 }
    }

    return Ans
}
