//
//  New Year Chaos.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 04/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

func minimumBribes(q: [Int]) {
    let arr = q
    var ans = 0
    for i in stride(from: arr.count - 1, through: 0, by: -1) {
        if arr[i] - (1 + i) > 2 {
            print("Too chaotic")
            return
        }

        for j in stride(from: max(0, q[i] - 2), to: i, by: 1) {
            if q[j] > q[i] { ans += 1 }
        }
    }
    print(ans)
    return
}
