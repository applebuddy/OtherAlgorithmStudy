//
//  What flavors.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - What Flavors : HashTable Problem

// MARK: 두개의 맛의 조합으로 money에 맞는 맛을 구매해라!

//    Sample Input
//
//    2
//    4
//    5
//    1 4 5 3 2
//    4
//    4
//    2 2 4 3
//    Sample Output
//
//    1 4
//    1 2

import Foundation

// Complete the whatFlavors function below.
func whatFlavors(cost: [Int], money: Int) {
    var dic = [Int: Int]()
    for i in cost.indices {
        dic[cost[i]] = i
    }

    for i in 0 ..< cost.count - 1 {
        let dicIdx = dic.index(forKey: money - cost[i])
        if dicIdx != nil, i != dic[dicIdx!].value {
            print(i + 1, dic[dicIdx!].value + 1, separator: " ", terminator: "")
            return
        }
    }
    return
}
