//
//  Max Min.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 10/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Max Min

// MARK: arr 배열 내 k개의 숫자집합의 최솟값-최댓값의 최소 차이값을 구하라!

import Foundation

// Complete the maxMin function below.
func maxMin(k: Int, arr: [Int]) -> Int {
    let sArr = arr.sorted()
    var Ans = 2_100_000_000
    for i in 0 ... arr.count - k {
        Ans = min(Ans, sArr[i + k - 1] - sArr[i])
        if Ans == 0 { return Ans }
    }
    return Ans
}
