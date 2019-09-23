//
//  CountingVelleys.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 22/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

func countingValleys(n _: Int, s: String) -> Int {
    var arr = Array(s)
    var height = 0
    var Ans = 0
    for i in arr.indices {
        if arr[i] == "U" {
            height += 1
            if height == 0 { Ans += 1 }
        }

        if arr[i] == "D" {
            height -= 1
        }
    }
    return Ans
}
