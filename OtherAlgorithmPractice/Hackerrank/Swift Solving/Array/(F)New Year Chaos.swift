//
//  New Year Chaos.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 04/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// func minimumBribes(q: [Int]) -> Void {
//    var arr = q
//    var ans = 0
//    for i in stride(from: arr.count-1, through: 0, by: -1) {
//        if arr[i] - (1 + i) > 2 {
//            print("Too chaotic")
//            return
//        }
//
//        for j in max(0,arr[i]-2 > i-1 ? 0 : arr[i]-2)...abs(i-1) {
//            if arr[j] > arr[i] {
//                ans += 1
//            }
//        }
//    }
//    print(ans)
//    return
// }
