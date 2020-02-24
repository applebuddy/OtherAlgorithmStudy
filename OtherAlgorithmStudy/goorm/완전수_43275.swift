//
//  완전수_43275.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 완전수 43275
// MARK: 문제풀이

/*
import Foundation

let N = readLine()!.split(separator: " ").map { Int($0)! }
let A = N[0], B = N[1]

func checkNum(_ N: Int) -> Bool {
        var sum = 0
        for i in 1..<N {
                if N % i == 0 {
                        sum += i
                }
        }
        return N == sum
}

for i in A...B {
        if checkNum(i) { print(i, terminator: " ") }
}
*/
