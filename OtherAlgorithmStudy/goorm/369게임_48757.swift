//
//  369게임_48757.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 369게임 48757

// MARK: 문제풀이

/*
 import Foundation

 let N = Int(readLine()!)!
 var Ans = 0

 func check369(_ N: inout Int) -> Int {
 var clap = 0
 while N > 0 {
         if N%10 == 3 || N%10 == 6 || N%10 == 9 {
                 clap += 1
         }
         N /= 10
 }
 return clap
 }

 if N < 3 { print(0); exit(0) }
 for i in 3..<N {
 var num = i
 Ans += check369(&num)
 }

 print(Ans)
 */
