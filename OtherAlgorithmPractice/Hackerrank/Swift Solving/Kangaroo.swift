//
//  Kangaroo.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - Kangaroo Problem

// MARK: 두 마리의 캥거루가 만나는 시점이 있는지 없는지 판별하라!

// - x1(첫번째 캥거루) < x2(두번쨰 캥거루), v1(첫번째 캥거루 점프 시 이동거리), v2(두번째 캥거루 점프 시 이동거리ㅣ)
// - 각각의 캥거루는 한턴 당 각각 한번씩 점프한다. 과연 두마리의 캥거루는 서로 만날 일이 존재할까?

// Complete the kangaroo function below.
func kangaroo(x1: Int, v1: Int, x2: Int, v2: Int) -> String {
    if v1 <= v2 { return "NO" }
    var n1 = x1, n2 = x2

    while n1 <= n2 {
        n1 = n1 + v1
        n2 = n2 + v2
        if n1 == n2 {
            return "YES"
        }
    }
    return "NO"
}
