//
//  알파벳빈도구하기_43086.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 알파벳빈도구하기 43086

// MARK: swift 문제풀이

/*
 import Foundation

 let N = Array(readLine()!)
 var cnt = [Int](repeating: 0, count: 26)
 let a = "a"

 for i in N.indices {
 if N[i] == " " { continue }
 var nowVal = Int(N[i].unicodeScalars.first!.value)
 nowVal -= nowVal >= 97 ? 97 : 65
 cnt[nowVal] += 1
 }

 for i in 97...122 {
 print("\(Character(Unicode.Scalar(i)!)) : \(cnt[i-97])")
 }
 */
