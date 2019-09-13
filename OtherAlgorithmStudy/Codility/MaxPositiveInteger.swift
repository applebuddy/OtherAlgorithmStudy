//
//  Max Positive Integer.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// you can write to stdout for debugging purposes, e.g.
// print("this is a debug message")

// ▶ extreme_single
// a single element ✘WRONG ANSWER
// got 3 expected 1
// 1. 0.024 s OK
// 2. 0.024 s WRONG ANSWER,  got 3 expected 1
// 3. 0.024 s RUNTIME ERROR,  tested program terminated with exit code 132
// 4. 0.024 s OK
// ▶ simple
// simple test ✘WRONG ANSWER
// got 3 expected 1
// ▶ extreme_min_max_value
// minimal and maximal values ✘WRONG ANSWER
// got 1000001 expected 1
// ▶ positive_only
// shuffled sequence of 0...100 and then 102...200 ✘WRONG ANSWER
// got 150 expected 1
// ▶ negative_only
// shuffled sequence -100 ... -1 ✔OK
// expand allPerformance tests
// ▶ medium
// chaotic sequences length=10005 (with minus) ✔OK
// ▶ large_1
// chaotic + sequence 1, 2, ..., 40000 (without minus) ✘TIMEOUT ERROR
// running time: 2.616 sec., time limit: 0.128 sec.
// ▶ large_2
// shuffled sequence 1, 2, ..., 100000 (without minus) ✘TIMEOUT ERROR
// running time: 4.920 sec., time limit: 0.128 sec.
// ▶ large_3
// chaotic + many -1, 1, 2, 3 (with minus) ✘TIMEOUT ERROR
// running time: 0.472 sec., time limit: 0.112 sec.

public func MaxPositiveInteger(_ A: inout [Int]) -> Int {
    if A.count == 0 {
        return 1
    } else {
        if A.max()! < 0 {
            return 1
        }
    }

    let sorted = A.filter { $0 > 0 }
    let st = Set(sorted).sorted()

    for i in st.min()! ..< st.max()! {
        if sorted.lastIndex(of: i) == nil {
            return i
        }
    }
    return st.max()! + 1
}
