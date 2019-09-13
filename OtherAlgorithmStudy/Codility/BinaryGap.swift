//
//  Binary Gap.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 10/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Binary Gap : Math Problem

// MARK: 이진법 변환 후 사이 0의 최대 길이값을 구하라!

import Foundation

public func solution(_ N: Int) -> Int {
    var num = N
    var len = 0
    var Ans = 0
    var oneV = 0
    while num > 0 {
        print(num % 2)
        if num % 2 == 1 {
            if oneV != 0 { Ans = max(Ans, len) }
            oneV += 1
            len = 0
        } else {
            len += 1
        }
        num /= 2
    }
    return Ans
}
