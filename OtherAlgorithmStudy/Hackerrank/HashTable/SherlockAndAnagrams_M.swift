//
//  Sherlock And Anagrams.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - (Sherlock And Anagrams)Anagram Problem

// MARK: 아나그램 경우의 수 찾기

// * Medium
import Foundation

func sherlockAndAnagrams(s: String) -> Int {
    let arr = Array(s)
    var Anagram = 0
    for length in 0 ... arr.count - 2 {
        var dic = [String: Int]()
        for j in 0 ..< arr.count - length {
            let txt = String(arr[j ... j + length].sorted())
            dic[txt] = (dic[txt] ?? 0) + 1
        }

        for k in dic {
            Anagram += (k.value * (k.value - 1) / 2)
        }
    }
    return Anagram
}

func sherlockAndAnagrams2(s: String) -> Int {
    let chars = Array(s)
    // String.Index는 탐색 복잡도가 별로다 Array로 변경하여 처리한다.
    var nAnagrams = 0
    // 맨 끝은 비교할 필요가 없으므로 chars.count-2까지만 순회한다.
    for length in 0 ... chars.count - 2 {
        // 존재하는 정렬된 문자열 경우의 수를 기록 할 딕셔너리를 준비한다.
        var counter: [String: Int] = [:]
        // 문자열길이는 현재 비교할 길이 값 만큼 제외한 범위에서 계산한다.
        for i in 0 ..< chars.count - length {
            // length만큼의 길이의 문자열들을 차례대로 정렬하여 txt에 넣은 뒤 counter키값으로 기록한다.
            let txt = String(chars[i ... i + length].sorted())
            counter[txt] = (counter[txt] ?? 0) + 1
        }
        for c in counter {
            // * 동일한 경우의 수의 2개의 짝 경우의 수가 곧 해당 길이의 Anagram의 갯수이다.
            nAnagrams += c.value * (c.value - 1) / 2
        }
    }
    return nAnagrams
}
