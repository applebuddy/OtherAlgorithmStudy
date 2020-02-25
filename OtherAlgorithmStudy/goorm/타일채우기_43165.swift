//
//  타일채우기_43165.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 타일채우기 43165
// MARK: DP swift 문제풀이

/*
import Foundation

let arr = readLine()!.split(separator: " ").map { Int($0)! }
let N = arr[0], M = arr[1]
var DP = [Int](repeating: 0, count: N+1)
DP[1] = 1
DP[2] = 3
if N <= 2 { print(DP[N]); exit(0) }
for i in 3...N {
        DP[i] = (DP[i-1] + DP[i-2] * 2) % M
}

print(DP[N])
*/
