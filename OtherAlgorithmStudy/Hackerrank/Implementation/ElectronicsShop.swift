//
//  ElectronicsShop.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

func getMoneySpent(keyboards: [Int], drives: [Int], b: Int) -> Int {
    var Ans = 0
    for i in keyboards.sorted().indices {
        for j in drives.sorted().indices {
            if keyboards[i] + drives[j] <= b {
                let sum = keyboards[i] + drives[j]
                Ans = (Ans < sum) ? sum : Ans
            }
        }
    }
    return (Ans == 0) ? -1 : Ans
}
