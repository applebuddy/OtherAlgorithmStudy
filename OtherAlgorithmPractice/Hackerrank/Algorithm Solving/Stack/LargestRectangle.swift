//
//  LargestRectangle.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - LargestRectangle

// MARK: 아파트의 높이가 정의 된 배열 h를 참고해 아파트 영역 내에서 만들 수 있는 최대 직사각형의 크기를 구하라!!

//    Sample Input
//
//    5
//    1 2 3 4 5
//
//    Sample Output
//
//    9

import Foundation

func largestRectangle(h: [Int]) -> Int {
    var Ans = 0

    for i in h.indices {
        var index = 1
        Ans = max(Ans, index * h[i])
        for j in stride(from: i - 1, through: 0, by: -1) {
            if h[i] > h[j] { break }
            index += 1
            Ans = max(Ans, index * h[i])
        }

        if i + 1 >= h.count { continue }
        for j in i + 1 ..< h.count {
            if h[i] > h[j] { break }
            index += 1
            Ans = max(Ans, index * h[i])
        }
    }
    return Ans
}
