//
//  mini-maxSum.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - Mini-MaxSum

// MARK: 5개의 정수 배열 중 4개를 더했을 때 최솟값, 최댓값을 구해라.

// Complete the miniMaxSum function below.
func miniMaxSum(arr: [Int]) {
    var ans = arr.reduce(0, +)
    print(ans - arr.sorted()[4], ans - arr.sorted()[0], separator: " ")
    return
}
