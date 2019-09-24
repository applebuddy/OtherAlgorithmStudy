//
//  Strings- Making Anagrams.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Strings: Making Anagrams : String Problem

// MARK: string a,b의 최소한의 알파벳을 제거하여 아나그램을 만들어라!!!

import Foundation

/// 문자열->배열 변환 후 배열인덱스 접근을 활용한 통과 답안
/// 문자열 인덱스를 접근한 방법보다 배열 인덱스 접근 복잡도는 O(1)으로 훨씬 효율적인 답안이다.
func makeAnagram(a: String, b: String) -> Int {
    var dic = [Character: Int]()
    let aArr = Array(a)
    let bArr = Array(b)
    var Ans = 0
    for i in aArr.indices {
        dic[aArr[i]] = (dic[aArr[i]] ?? 0) + 1
    }

    for i in bArr.indices {
        dic[bArr[i]] = (dic[bArr[i]] ?? 0) - 1
    }

    for (_, value) in dic {
        if value != 0 {
            Ans += abs(value)
        }
    }
    return Ans
}

//// forEach, 문자열 색인 사용 통과답안
//// 문자열 인덱스 접근 속도는 O(N) 이므로 비효율적이다.
//
// var arr = [Int](repeating: 0, count: 26)
// func makeAnagram(a: String, b: String) -> Int {
//    var ans = 0
//    for i in 0 ..< a.count {
//        let idx = a.index(a.startIndex, offsetBy: i)
//        let index = Int(a[idx].unicodeScalars.first!.value - Unicode.Scalar("a").value)
//        arr[index] += 1
//    }
//
//    for i in 0 ..< b.count {
//        let idx = b.index(b.startIndex, offsetBy: i)
//        let index = Int(b[idx].unicodeScalars.first!.value - Unicode.Scalar("a").value)
//        arr[index] -= 1
//    }
//
//    arr.forEach { value in
//        ans += abs(value)
//    }
//    return ans
// }
