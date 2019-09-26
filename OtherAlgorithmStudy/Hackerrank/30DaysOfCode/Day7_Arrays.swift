//
//  Day7_Arrays.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 24/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Day7_Arrays

// MARK: 입력받은 배열 요소를 역순으로 출력하라!!

import Foundation

func ArrayExample() {
    guard let n = Int((readLine()?.trimmingCharacters(in: .whitespacesAndNewlines))!)
    else { fatalError("Bad input") }

    guard let arrTemp = readLine() else { fatalError("Bad input") }
    let arr: [Int] = arrTemp.split(separator: " ").map {
        if let arrItem = Int($0.trimmingCharacters(in: .whitespacesAndNewlines)) {
            return arrItem
        } else { fatalError("Bad input") }
    }

    guard arr.count == n else { fatalError("Bad input") }

    for (_, value) in arr.reversed().enumerated() {
        print("\(value) ", terminator: "")
    }
}
