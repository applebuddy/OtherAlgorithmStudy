//
//  알파벳빈도구하기_43086.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 알파벳빈도구하기 43086
// MARK: swift 문제풀이

/*
let input = Array(readLine()!)

var alpha = [Int](repeating: 0, count: 26)
for i in input.indices {
        if input[i] == " " { continue }
        let ascii = Int(input[i].unicodeScalars.first!.value)
        let ascVal = ascii >= 97 ? ascii-97 : ascii-65
        alpha[ascVal] += 1
}

for i in alpha.indices {
        print("\(Unicode.Scalar(97 + i)!) : \(alpha[i])")
}
*/
