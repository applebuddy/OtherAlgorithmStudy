//
//  File.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 15/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - NumberOfDiscIntersections

// MARK: A 배열 인덱스 기준 A[i]만큼의 반지름 원이 그려진다.

// => 서로 교집합이 생기는 원의 짝 갯수를 출력해라!!

import Foundation

// 복잡도 O(N or NlogN 답안 (정확성, 효율성 통과)
public func numberOfDiscIntersections(_ A: [Int]) -> Int {
    var Ans = 0
    var sArr = [Int](repeating: 0, count: A.count)
    var eArr = [Int](repeating: 0, count: A.count)
    for i in A.indices {
        let st = (i > A[i]) ? i - A[i] : 0
        let ed = (A.count - 1 - i > A[i]) ? i + A[i] : A.count - 1
        sArr[st] += 1
        eArr[ed] += 1
    }

    var dup = 0
    for i in A.indices {
        if sArr[i] > 0 {
            Ans += dup * sArr[i]
            Ans += (sArr[i] * (sArr[i] - 1) / 2)
            if Ans > 10_000_000 { return -1 }
            dup += sArr[i]
        }
        dup -= eArr[i]
    }
    return Ans
}

///// 정확성 통과, 시간초과 답안 (복잡도 O(N**2))
// public func disc(_ A : [Int]) -> Int {
//    var Ans = 0
//    var disc = [(Int,Set<Int>)]()
//    for i in A.indices {
//        var set = Set<Int>()
//        for j in i-A[i]...i+A[i] {
//            set.insert(j)
//        }
//        disc.append((i, set))
//    }
//
//    disc.sort() { $0.1.count > $1.1.count }
//    for i in disc.indices {
//        for j in i + 1..<disc.count {
//            if !disc[i].1.intersection(disc[j].1).isEmpty { Ans += 1 }
//            if Ans > 10000000 { return -1 }
//        }
//    }
//    return Ans
// }
