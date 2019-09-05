//
//  MeximumToys.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - MeximumToys Problem

// MARK: k원을 통해 최대한의 로봇을 구매할 수 있도록 하라!

import Foundation

func maximumToys(prices: [Int], k: Int) -> Int {
    var key = k
    var ans = 0
    for (_, value) in prices.sorted().enumerated() {
        if key >= value { key -= value; ans += 1 }
        else { break }
    }
    return ans
}
