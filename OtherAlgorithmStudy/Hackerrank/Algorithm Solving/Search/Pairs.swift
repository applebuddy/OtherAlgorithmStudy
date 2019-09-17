//
//  Pairs.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Pairs : Seaching Problem

// MARK: k만큼의 간격이 있는 쌍의 갯수를 구하라!

import Foundation

// Complete the pairs function below.
func pairs(k: Int, arr: [Int]) -> Int {
    let ar = arr.sorted()
    var Ans = 0
    for i in 0 ..< ar.count - 1 {
        for j in i + 1 ... ar.count - 1 {
            if abs(ar[i] - ar[j]) == k {
                Ans += 1
            } else if abs(ar[i] - ar[j]) > k {
                break
            }
        }
    }
    return Ans
}
