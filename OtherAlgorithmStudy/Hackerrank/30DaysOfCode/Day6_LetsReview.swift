//
//  Day6_LetsReview.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 23/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Day_6_LetsReview

// MARK: 짝수, 홀두번째 인덱스의 문자열을 쪼개서 출력하라!!!

import Foundation

func printEvenAndOdd(string: String) {
    // This prints inputString to stderr for debugging:
    fputs("string: " + string + "\n", stderr)

    // Print the odd-indexed characters
    // Write your code here
    let arr = Array(string).map { String($0) }
    var first = [String]()
    var second = [String]()
    for i in arr.indices {
        if i % 2 == 0 { first.append(arr[i]) }
        else { second.append(arr[i]) }
    }
    // Print a newline
    print("\(first.joined()) \(second.joined())")
}
