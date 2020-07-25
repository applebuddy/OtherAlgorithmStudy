//
//  괄호짝맞추기_43119.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 괄호 짝 맞추기 43119

// MARK: swift 문제풀이

/*
 import Foundation

 let S = Array(readLine()!)
 var STK = [Character]()
 var flag = true
 for i in S.indices {
 if S[i] == "(" || S[i] == "[" || S[i] == "{" { STK.append(S[i]) }
 else if S[i] == ")" && !STK.isEmpty && STK.last! == "(" { STK.removeLast() }
 else if S[i] == "]" && !STK.isEmpty && STK.last! == "[" { STK.removeLast() }
 else if S[i] == "}" && !STK.isEmpty && STK.last! == "{" { STK.removeLast() }
 else { flag = false; break }
 }

 print(flag && STK.isEmpty ? "True" : "False")
 */
