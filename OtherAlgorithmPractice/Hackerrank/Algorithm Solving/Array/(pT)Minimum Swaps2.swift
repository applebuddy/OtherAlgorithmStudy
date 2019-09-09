//
//  MinimumSwaps2.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Minimum Swaps 2

// MARK: 두개 쌍으로 숫자를 최소한으로 스왑한 횟수를 출력하라!

// * 현재 C++는 통과, Swift로는 3~4개 테스트 TimeOut 발생
import Foundation

// func find(_ arr: [Int], first: Int, end: Int, target: Int) -> Int {
//    for i in first..<end {
//        if arr[i] == target {
//            return i
//        }
//    }
//    return 0
// }

func minimumSwaps(arr: [Int]) -> Int {
    var ar = arr
    var ans = 0
    for i in 0 ..< ar.count - 1 {
        if ar[i] == i + 1 { continue }
        ar.swapAt(i, ar[i + 1 ..< ar.count].firstIndex(of: i + 1)!)
        ans += 1
    }
    return ans
}
