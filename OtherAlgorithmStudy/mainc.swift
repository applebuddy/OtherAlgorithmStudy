////
////  main.swift
////  OtherAlgorithmStudy
////
////  Created by MinKyeongTae on 03/09/2019.
////  Copyright © 2019 Min Kyeong Tae. All rights reserved.
////
//
// import Foundation
//
//// staircase(n: 6)
//
//// print(timeConversion(s: "12:05:39AM"))
//// print(timeConversion(s: "06:40:03AM"))
//
//// print(kangaroo(x1: 1571, v1: 4240, x2: 9023, v2: 4234))
//
//// print(getTotalX(a: [1], b: [72, 48]))
////
//// print(sockMerchant(n: 5, ar: [1, 1, 2, 2, 3]))
// print(makeAnagram(a: "aaaaaaaaaaaaaaaaaaaaaaaaaaaaa", b: "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb"))
// print(getMinimumCost(k: 72, c: [692_261, 48553, 549_680, 661_623, 274_985, 142_762, 235_623, 43717, 568_519, 285_863, 64114, 529_201, 429_801, 426_630, 261_332, 744_012, 165_142, 60667, 585_075, 437_392, 172_545, 145_521, 426_548, 860_002, 44348, 403_475, 129_090, 678_438, 471_882, 357_431, 597_870, 980_287, 400_657, 991_847, 787_760, 215_651, 970_172, 29456, 607_498, 833_260, 259_798, 45242, 391_762, 247_919, 288_669, 437_366, 207_872, 894_609, 80217, 17796, 502_235, 821_413, 167_777, 876_792, 408_894, 310_399, 665_738, 802_203, 416_528, 178_599, 973_866, 195_567, 136_668, 629_609, 143_047, 412_752, 849_676, 150_793, 570_593, 307_894, 820_743, 639_060, 318_873, 609_303, 146_660, 591_954, 949_437, 634_025, 136_265, 350_808, 81329, 819_397, 14821, 429_050, 453_627, 457_191, 194_502, 421_917, 258_922, 282_770, 978_967, 603_178, 701_412, 481_105, 313_722]))

// print(flippingBits(n: 2))
// print(largestRectangle(h: [6320, 6020, 6098, 1332, 7263, 672, 9472, 2838, 3401, 9494]))

// reduceCapacity(model: [6,6,6,6,7,7,7,7,5])

// print(areAlmostEquivalent(s: ["a","a","a","b","c","c","c","c","c"], t: ["a","a","b","c","d"]))

// print(compressWord(word: "aabbcc", K: 2))
// print(compressWord(word: "abaaa", K: 3))
// print(compressWord(word: "abaaa", K: 2))
// print(compressWord(word: "abbaaa", K: 2))
// print(compressWord(word: "aba", K: 2))
// print(compressWord(word: "baac", K: 2))

// print(compressWord(word: "aaaaaa", K: 6))

public func sad(_ S: String) -> Int {
//
    /// 1) Components를 사용하여 "?", "!", "."간격으로 분리 후 배열화 한다.
    let arr = S.components(separatedBy: ["?", "!", "."])

    // Ans : 쪼갠 문자열 배열 내 최대 문자 갯수를 기록한다.
    var Ans = 0

    // flag : 모든 배열의 문자열이 전부 비었는지를 체크한다.
    var flag = false

    /// 2) 각각의 쪼개진 배열 내 문자의 갯수를 확인한다.
    for i in arr.indices {
        // arr 내의 String을 " " 단위로 쪼갠 후 String 내의 문자의 갯수를 확인한다.
        let wordCount = max(Ans,
                            (arr[i].components(separatedBy: " ").count == 1) ? 1 : arr[i].components(separatedBy: " ").count - 1)
        // 만약 공백 제외 시 문자가 하나이상 존재한다면
        if wordCount != 0 { flag = true }
        Ans = wordCount
    }

    // components로 쪼갠 문자열 요소들의 공백을 제외한 길이가 전부 0이면 flag==false므로 0을 반환한다.
    // 어느 하나라도 쪼갠 문자열 요소들 중 길이가 1이상 존재하면 최대 문자갯수 값, Ans값을 반환한다.
    return flag ? Ans : 0
}

//
// print(sad("a"))
// func sol() {
//
//    arr.removeLast()
//    print("arr.removeLast() : \(arr)") // [1,2,3,4,5]
//    arr.removeFirst()
//    print("arr.removeFirst() : \(arr)") // [2,3,4,5,6]
//    arr.remove(at: 0)
//    print("arr.remove(at: 0) : \(arr)") // [2,3,4,5,6]
//    arr.remove(at: arr.count-1)
//    print("arr.remove(at: arr.count-1) : \(arr)") // [2,3,4,5]
// arr.removeAll()
// print("removeAll() : \(arr)") // []
//    arr = [0,1,2,3,4,5]
//    print("nowArray elements : \(arr)")

//    var arr0 = [Int]()
//    arr0.append(3)
//    arr0.append(2)
//    print(arr0) // [3,2]

//    arr.removeSubrange(0...1) // 0 ~ 1번째 인덱스의 값을 삭제
//    print("arr.removeSubrange(0...1) : \(arr)") // [3,4,5,6]
//    arr.append(contentsOf: arr[0...1]) // 현재 arr의 0 ~ 1번째 인덱스값을 뒤에 추가한다.
//    print("arr.append(contentsOf: arr[0...1]) : \(arr)")

//    var arr = [1,2,3]
//    print("nowArray elements : \(arr)") // -> [1,2,3]
//    arr.insert(99, at: 0) // 맨 앞에 99를 추가한다.
//    print("arr.insert(99, at: 0) : \(arr)") // -> [99, 1, 2, 3]
//    arr.insert(99, at: arr.endIndex) // 맨 뒤에 99를 추가한다.
//    print("arr.insert(99, at: arr.count) : \(arr)") // -> [99, 1, 2, 3, 99]
// }

// sol()
// print(minimumTapes([5,2,3,4,2]))
