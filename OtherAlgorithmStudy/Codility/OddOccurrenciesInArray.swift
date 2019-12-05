//
//  OddOccurrenciesInArray.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - OddOccurrenciesInArray (100)

// MARK: 짝을 짓지 못하는 숫자를 구하라

import Foundation

public func solution(_ A: inout [Int]) -> Int {
    var dic = [Int: Int]()
    for i in A.indices {
        dic[A[i]] = (dic[A[i]] ?? 0) + 1
    }

    for (key, value) in dic {
        if value % 2 == 1 { return key }
    }
    return 0
}
