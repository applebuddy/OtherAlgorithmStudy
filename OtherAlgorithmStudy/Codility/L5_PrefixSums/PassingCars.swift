//
//  PassingCars.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 13/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - PassingCars : PrefixSums

// MARK: 동쪽(0), 서쪽(1)으로 각각 지나간 차들의 쌍 갯수를 계산 하자!

// 배열 A의 인덱스 순서로 차가 지나간다.
// * 단 동쪽으로 지나간 뒤 서쪽으로 지나가는 차가 있어야 쌍을 이룰 수 있다.

import Foundation

func passingCars(_ A: inout [Int]) -> Int {
    var Ans = 0
    var cnt = 0
    let standard = 0

    for i in 0 ..< A.count {
        if A[i] == standard { cnt += 1 }
        else { Ans += cnt }
        if Ans > 1_000_000_000 { return -1 }
    }
    return Ans
}

import Foundation

public func solution2(_ A: inout [Int]) -> Int {
    var Ans = 0
    var cnt = 0
    for i in A.indices {
        if A[i] == 0 { cnt += 1 }
        else { Ans += cnt }
        if Ans > 1_000_000_000 { return -1 }
    }
    return Ans
}
