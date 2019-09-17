//
//  minimum Absolute Difference.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - minimumAbsoluteDifference

// MARK: 배열 내의 최소간격 차이를 출력하라! (절대값 기준)

import Foundation

// Complete the minimumAbsoluteDifference function below.
func minimumAbsoluteDifference(arr: [Int]) -> Int {
    var sorted = arr.sorted()
    var minV = 2_000_000_000
    for i in 0 ..< sorted.count - 1 {
        minV = min(minV, abs(sorted[i] - sorted[i + 1]))
    }
    return minV
}
