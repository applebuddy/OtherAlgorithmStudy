//
//  MissingIntegers.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - MissingInteger

/// A의 요소를 제외 한 양수 중 가장 작은 양수값을 출력해라!

/// * O(N) or O(NlogN) 답안
import Foundation

public func missingIntegers(_ A: [Int]) -> Int {
    if A.isEmpty { return 1 }
    let arr = A.sorted()
    if arr.last! <= 0 { return 1 }

    var dic = [Int: Int]()
    for i in A.indices {
        dic[A[i]] = (dic[A[i]] ?? 0) + 1
    }

    for i in 1 ... arr.last! + 1 {
        if dic[i] == nil { return i }
    }
    return 1
}
