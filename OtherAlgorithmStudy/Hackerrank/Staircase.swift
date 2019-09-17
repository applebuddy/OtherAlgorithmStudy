//
//  Staircase.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// Complete the staircase function below.

// MARK: 별찍기 문제

func staircase(n: Int) {
    var ans = ""
    for x in 0 ... n {
        for y in 0 ... n {
            if y >= n - x {
                ans += "#"
            } else {
                ans += " "
            }
        }
        if x == n - 1 {
            print(ans, terminator: "")
            return
        }
        ans += "\n"
    }
}
