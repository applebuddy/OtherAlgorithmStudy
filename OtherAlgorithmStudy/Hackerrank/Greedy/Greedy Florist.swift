//
//  Greedy Florist.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Greedy Florist

// MARK: 꽃의 가격 c: [Int], 구매할 사람의 수 k가 주어진다.

// k명은 c 배열에 기록된 모든 꽃을 구매 해야한다. 이때 욕심많은 꽃주점 아저씨때문에 각 사람 마다 N번째 이후 구매하는 꽃의 가격은 N배로 상승한다.
// -> 이때 k명이 a: [Int]의 모든 꽃을 구매할 수 있는 최소한의 비용을 출력하라!
import Foundation

/// 내림차순 정렬 + $0/$1 parameters 사용 통과 답안, 복습, '19. 09. 24.
func getMinimumCost2(k: Int, c: [Int]) -> Int {
    let arr = c.sorted { $0 > $1 }
    var Ans = 0
    for i in arr.indices {
        Ans += arr[i] * (1 + i / k)
    }
    return Ans
}

/// 내림차순 정렬 사용 통과 답안
func getMinimumCost(k: Int, c: [Int]) -> Int {
    let arr = c.sorted { a1, a2 in
        a1 > a2
    }
    var Ans = 0
    for i in arr.indices {
        // 최대한 존재하는 k명의 인원들이 나눠서 꽃을 구매하여 덤탱이를 최소화 한다.
        // 최대한 기본 가격이 비싼 꽃은 1배수로 조기에 구매를 한다. (arr을 내림차순 정렬한 이유)
        Ans += (i / k + 1) * arr[i]
    }
    return Ans
}
