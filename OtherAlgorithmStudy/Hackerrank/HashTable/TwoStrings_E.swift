//
//  TwoStrings.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 24/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Two Strings

// MARK: 두 개의 스트링 내 중복 된 문자(Character) 값이 존재하는 지 확인 한다.

// => 만약 중복된 문자 값이 존재한다면, "YES", 미 존재 시 "NO"를 반환하는 함수를 구현한다.

import Foundation

func twoStrings(s1: String, s2: String) -> String {
    let s1Arr = Array(s1)
    let s2Arr = Array(s2)
    var dic = [Character: Int]()
    for (_, value) in s1Arr.enumerated() {
        dic[value] = (dic[value] ?? 0) + 1
    }
    for (_, value) in s2Arr.enumerated() {
        dic[value] = (dic[value] ?? 0) - 1
        if dic[value]! >= 0 {
            return "YES"
        }
    }
    return "NO"
}
