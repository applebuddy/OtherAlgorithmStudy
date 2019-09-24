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

/// min() 함수 미사용 버전, 통과 답안
func minimumAbsoluteDifference2(arr: [Int]) -> Int {
    let num = arr.sorted()
    var Ans = 2_100_000_000
    for i in num.indices {
        if i == num.count - 1 { break }
        let tmp = abs(num[i] - num[i + 1])
        if tmp < Ans { Ans = tmp }
    }
    return Ans
}

/// min() 함수 사용 버전, 통과 답안
func minimumAbsoluteDifference(arr: [Int]) -> Int {
    let sorted = arr.sorted()
    var minV = 2_000_000_000
    for i in 0 ..< sorted.count - 1 {
        minV = min(minV, abs(sorted[i] - sorted[i + 1]))
    }
    return minV
}
