//
//  BetweenToSets.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - ✭ LCD, GCD 응용문제

import Foundation

// * 최대공약수 구하는 메서드, 재귀함수를 활용한다.
func GCD(n1: Int, n2: Int) -> Int {
    if n2 == 0 {
        return n1
    }
    return GCD(n1: n2, n2: n1 % n2)
}

// * 최소공배수 구하는 메서드, a * b / 최대공약수 == 최소공배수
func LCD(a: Int, b: Int) -> Int {
    return a * b / GCD(n1: a, n2: b)
}

func getTotalX(a: [Int], b: [Int]) -> Int {
    var lcd = 0
    var gcd = 0
    for i in a.indices {
        if i == 0 { lcd += a[i]; continue }
        lcd = LCD(a: lcd, b: a[i])
    }
    for i in b.indices {
        if i == 0 { gcd += b[i]; continue }
        gcd = GCD(n1: gcd, n2: b[i])
    }
    var edge = lcd, count = lcd
    var ans = 0
    while count <= gcd {
        if gcd % count == 0 {
            ans += 1
        }
        count += edge
    }
    return ans
}
