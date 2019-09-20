//
//  Day3_IntroToConditionalStatements.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 20/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - IntroToConditionalStatements

// MARK: 특정 조건에 따라 true, false 판단하기 기초문제

import Foundation

func introToConditionalStatements(N: Int) {
    var isWeird = false
    if N % 2 == 1 { isWeird = true }
    else if N >= 6, N <= 20 { isWeird = true }

    print(isWeird ? "Weird" : "Not Weird", terminator: "")
}
