//
//  AppleAndOrange.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// Complete the countApplesAndOranges function below.
func countApplesAndOranges(s: Int, t: Int, a: Int, b: Int, apples: [Int], oranges: [Int]) {
    var ans: (Int, Int) = (0, 0)
    for i in apples.indices {
        if s <= (a + apples[i]), (a + apples[i]) <= t {
            ans.0 += 1
        }
    }

    for i in oranges.indices {
        if s <= (b + oranges[i]), (b + oranges[i]) <= t {
            ans.1 += 1
        }
    }

    print(ans.0, ans.1, separator: "\n")
    return
}
