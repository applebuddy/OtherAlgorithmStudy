//
//  SockMerchant.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - Sock Merchant

// MARK: 총 몇개의 쌍이 있는지 확인하라(같은 숫자 페어의 갯수 반환)

// ex) 1,1,2,3,4,5,5,5,6,6 -> 1,5,6이 각각 1쌍 씩 있으므로, 답은 3
// Complete the sockMerchant function below.

/// 통과 답안 , Boolean 사용버전
func sockMerchantWithBoolean(n _: Int, ar: [Int]) -> Int {
    var Ans = 0
    let arr = ar.sorted()

    var flag = true
    for i in 0 ..< arr.count - 1 {
        if arr[i] == arr[i + 1], flag {
            Ans += 1
            flag = false
            continue
        }
        flag = true
    }
    return Ans
}

/// 통과 답안, while문 사용 버전
func sockMerchantWithWhile(n _: Int, ar: [Int]) -> Int {
    var ans = 0
    var arr = ar
    while arr.count >= 2 {
        if arr[0] == arr[1] {
            ans += 1
            arr.removeSubrange(0 ... 1)
        } else {
            arr.remove(at: 0)
        }
    }
    return ans
}
