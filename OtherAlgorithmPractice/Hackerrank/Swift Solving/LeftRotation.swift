//
//  LeftRotation.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 04/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// Complete the rotLeft function below.
func rotLeft(a: [Int], d: Int) -> [Int] {
    var a1 = a
    let rot = d % a.count
    a1.removeSubrange(0 ... rot - 1)
    for i in 0 ..< rot {
        a1.append(a[i])
    }
    return a1
}
