//
//  MinimumSwaps2.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

func minimumSwaps(arr: [Int]) -> Int {
    var ar = arr
    var ans = 0
    for i in ar.indices {
        if ar[i] == i + 1 { continue }
        let idx = ar.lastIndex(of: i + 1)!
        ar.swapAt(i, idx)
        ans += 1
    }
    return ans
}
