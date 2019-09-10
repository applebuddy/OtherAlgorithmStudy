//
//  Array Rotation.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - Array Rotation (100)

// K번 우측 배열 회전 결과를 출력하라!

// you can write to stdout for debugging purposes, e.g.
// print("this is a debug message")

public func solution(_ A: inout [Int], _ K: Int) -> [Int] {
    if A.count <= 1 { return A }
    var arr = A
    let rotValue = K % A.count
    arr.removeSubrange(0 ..< A.count - rotValue)
    for i in 0 ..< A.count - rotValue {
        arr.append(A[i])
    }
    return arr
}
