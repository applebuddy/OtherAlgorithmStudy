//
//  스택(Stack)_43218.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 스택(Stack) 43218
// MARK: stack swift 문제풀이

/*
import Foundation

let T = Int(readLine()!)!

var prev = -1
var STK = [Int]()
for _ in 0..<T {
    let N = Int(readLine()!)!
    if N == 0 {
        let num = Int(readLine()!)!
        if STK.count == 10 { print("overflow") }
        else { STK.append(num) }
    } else if N == 1 {
        if STK.isEmpty { print("underflow") }
        else { STK.removeLast() }
    } else { break }
}

STK.forEach { print($0, terminator: " ") }
*/
