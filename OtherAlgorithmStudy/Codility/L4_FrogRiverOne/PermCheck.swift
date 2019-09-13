//
//  PermCheck.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 13/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - PermCheck

// MARK: 배열내의 요소가 1,2,3,...~배열크기 만큼 존재하면 Permutation으로 본다.

// Permutation이면 1을, Permutation이 아니면 0을 출력하라!!

import Foundation

public func checkPermutation(_ A: [Int]) -> Int {
    var arr = A.sorted()
    var Ans = 1
    for i in 1 ... arr.count {
        if i != arr[i - 1] { Ans = 0; break }
    }
    return Ans
}
