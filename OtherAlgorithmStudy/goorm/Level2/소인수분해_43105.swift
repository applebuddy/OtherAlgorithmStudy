//
//  소인수분해_43105.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/11.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 소인수분해 43105
/*
var input = Int(readLine()!)!
var P = [Bool](repeating: true, count: input+1)
var Prime = [Int]()
var i=2, j=i+i
while i*i <= input {
        if P[i] == true {
                j = i+i
                while j <= input {
                        P[j] = false
                        j += i
                }
        }
        i += 1
}

for i in 2...input {
        if P[i] == true { Prime.append(i) }
}

var idx = 0
var Ans = [Int]()
var len = Prime.count
while idx < len && input > 1 {
        let nowPrime = Prime[idx]
        while input % nowPrime == 0 {
                Ans.append(nowPrime)
                input /= nowPrime
        }
        idx += 1
}

print(Ans.map { String($0) }.joined(separator: " "))
*/
