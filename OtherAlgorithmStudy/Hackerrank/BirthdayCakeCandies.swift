//
//  BirthdayCakeCandies.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - BirthDay Cake Candies

// MARK: 양초 중 가장 높은 높이의 양초의 갯수를 구하라

// Complete the birthdayCakeCandles function below.
func birthdayCakeCandles(ar: [Int]) -> Int {
    let max = ar.sorted()[ar.count - 1]
    var ans = 0
    ar.forEach {
        if $0 == max {
            ans += 1
        }
    }
    return ans
}
