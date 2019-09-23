//
//  FlippingBits.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// Complete the flippingBits function below.
func flippingBits(n: Int) -> Int {
    return ~n < 0 ? ~n + Int(pow(Double(2), 32)) : ~n
}
