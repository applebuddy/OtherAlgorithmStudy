//
//  Day5_Loops.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 22/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Day5_Loop : Basic Loop Example

// MARK: 입력값, n 에 대한 1~10 곱한 값을 순차적으로 출력하라!

import Foundation

func basicLoopExample() {
    /// 공백, 개행을 제외한 숫자를 입력 받아 1~10 사이의 곱셈값을 출력할 준비를 한다.
    guard let n = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
    else { fatalError("Bad input") }

    /// 숫자 n 기준, 1~10 까지의 곱셈값 출력
    for i in 1 ... 10 {
        print("\(n) x \(i) = \(n * i)")
    }
}
