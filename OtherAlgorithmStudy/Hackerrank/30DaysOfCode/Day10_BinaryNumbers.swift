//
//  Day10_BinaryNumbers.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Day 10 : Binary Numbers

//  * 입력받은 n을 이진수로 변환했을때 연속되는 1의 최대갯수를 출력하라!!!

import Foundation

func convertNum(_ n: Int) -> String {
    var num = n
    var str = ""
    while num > 0 {
        let temp = num % 2
        str = "\(temp)\(str)"
        num /= 2
    }
    return str
}

func checkConsecutiveCount(_ str: String) {
    let arr = Array(str)
    var cnt = 1
    var Ans = 1
    for i in arr.indices {
        if i == arr.count - 1 { break }
        if arr[i] == arr[i + 1] { cnt += 1; Ans = max(Ans, cnt) }
        else { cnt = 1 }
    }
    print(Ans)
}

func countBinaryNumbers(n: Int) {
    let binaryStr = convertNum(n)
    checkConsecutiveCount(binaryStr)
}
