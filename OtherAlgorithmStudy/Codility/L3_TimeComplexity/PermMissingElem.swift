//
//  PermMissingElem.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Permutation Missing Element

// MARK: i...N의 범위를 갖는 배열 내 1...N+1개의 숫자 중 빠진 숫자를 찾아라!!

import Foundation

// MARK: - Set 활용 빠진요소 찾기 답안

public func findMissingElement2(_ A : inout [Int]) -> Int {
    var ST = Set<Int>(1...A.count+1)
    for i in A.indices { ST.remove(A[i]) }
    return ST.first!
}

// MARK: - 정렬 후 빠진요소 찾기 답안

public func findMissingElement(_ A: inout [Int]) -> Int {
    if A.count == 1 { return A[0] == 1 ? 2 : 1 }
    let arr = A.sorted()
    for i in arr.indices {
        if arr[i] != i + 1 {
            return i + 1
        }
    }
    return A.count + 1
}
