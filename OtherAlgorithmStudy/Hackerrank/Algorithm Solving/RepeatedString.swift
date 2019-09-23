//
//  RepeatedString.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 23/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - RepeatedString

// MARK: 문자열 내 반복되는 'a'의 갯수를 찾아라!!

// ex) 반복될 문자, "sadsdasd", 반복되는 길이 n의 문자열 내 'a'의 갯수를 반환

import Foundation

func repeatedString(s: String, n: Int) -> Int {
    let arr = Array(s)
    if arr.count == 1 {
        return arr[0] == "a" ? n : 0
    }
    var Ans = 0
    for i in arr.indices {
        if arr[i] == "a" { Ans += 1 }
    }

    Ans *= n / arr.count

    for i in 0 ..< n % arr.count {
        if arr[i] == "a" { Ans += 1 }
    }
    return Ans
}
