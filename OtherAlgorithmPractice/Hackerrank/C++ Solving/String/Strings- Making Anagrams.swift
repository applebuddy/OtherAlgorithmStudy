//
//  Strings- Making Anagrams.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

var arr = [Int](repeating: 0, count: 26)

// Complete the makeAnagram function below.
func makeAnagram(a: String, b: String) -> Int {
    var ans = 0
    for i in 0 ..< a.count {
        let idx = a.index(a.startIndex, offsetBy: i)
        let index = Int(a[idx].unicodeScalars.first!.value - Unicode.Scalar("a").value)
        arr[index] += 1
    }

    for i in 0 ..< b.count {
        let idx = b.index(b.startIndex, offsetBy: i)
        let index = Int(b[idx].unicodeScalars.first!.value - Unicode.Scalar("a").value)
        arr[index] -= 1
    }

    arr.forEach { value in
        ans += abs(value)
    }
    return ans
}
