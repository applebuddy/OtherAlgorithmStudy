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

/// append(contentsOf:) 사용 예시)
public func solution(_ A: [Int], _ K: Int) -> [Int] {
    if A.count <= 1 { return A }
    var arr = A
    let rotValue = K % A.count
    arr.removeSubrange(0 ..< A.count - rotValue)
    arr.append(contentsOf: A[0 ..< A.count - rotValue])
    return arr
}

///// append(contentsOf:) 미사용 예시)
// public func solution(_ A: inout [Int], _ K: Int) -> [Int] {
//    if A.count <= 1 { return A }
//    var arr = A
//    let rotValue = K % A.count
//    arr.removeSubrange(0 ..< A.count - rotValue)
//    for i in 0 ..< A.count - rotValue {
//        arr.append(A[i])
//    }
//    return arr
// }
