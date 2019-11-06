//
//  MaxProductOfThree.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 15/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - MaxProductOfThree

// MARK: A배열 내 요소 중 3개를 곱한 최댓값을 구해라!!

import Foundation

public func maxProductOfThree(_ A: inout [Int]) -> Int {
    if A.count == 3 { return A[0] * A[1] * A[2] }
    var Ans = 0
    let arr = A.sorted()
    Ans = max(arr[0] * arr[1] * arr[A.count - 1], arr[A.count - 1] * arr[A.count - 2] * arr[A.count - 3])
    return Ans
}
