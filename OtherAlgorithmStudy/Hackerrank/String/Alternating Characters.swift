//
//  Alternating Characters.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: Array.Index 를 사용한 풀이 (시간초과 문제 해결)

func alternatingCharacters(s: String) -> Int {
    var ans = 0
    let arr = Array(s)
    for i in 0 ..< arr.count - 1 {
        if arr[i] == arr[i + 1] {
            ans += 1
        }
    }
    return ans
}

// MARK: - String.Index 를 사용한 풀이 (일부 테스트 시간초과 문제 발생)

// func alternatingCharacters(s: String) -> Int {
//    var ans = 0
//    let si = s.startIndex
//    for i in 0..<s.count-1 {
//        if s[s.index(si,offsetBy: i)] == s[s.index(si,offsetBy: i+1)] {
//            ans += 1
//        }
//    }
//    return ans
// }
