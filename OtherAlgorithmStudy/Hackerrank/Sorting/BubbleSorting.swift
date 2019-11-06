//
//  BubbleSorting.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: Bubble Sorting

// MARK: Bubble Sorting Problem

// -> 버블 소팅으로 오름파순 정렬을 하는데 드는 소요와 컬렉션 요소의 양끝 값을 출력해보자
import Foundation

func countSwaps(a: [Int]) {
    var arr = a
    var cnt = 0
    for _ in arr.indices {
        for j in 0 ..< arr.count - 1 {
            if arr[j] > arr[j + 1] { arr.swapAt(j, j + 1); cnt += 1 }
        }
    }
    print("Array is sorted in \(cnt) swaps.")
    print("First Element: \(arr[0])")
    print("Last Element: \(arr[arr.count - 1])", terminator: "")
}
