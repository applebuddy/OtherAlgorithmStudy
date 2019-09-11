//
//  MinimumTapes.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - TapeEquilibrium (100%)

// MARK: A 배열을 둘로 갈랐을때 각 두개의 배열 합의 최솟값을 구해라!!

import Foundation

public func minimumTapes(_ A: [Int]) -> Int {
    // write your code in Swift 4.2.1 (Linux)
    var Ans = 2_100_000_000
    let arrSum = A.reduce(0, +)
    var frontSum = 0
    for i in 0 ..< A.count - 1 {
        frontSum += A[i]
        Ans = min(Ans, abs(frontSum - (arrSum - frontSum)))
    }
    return Ans
}
