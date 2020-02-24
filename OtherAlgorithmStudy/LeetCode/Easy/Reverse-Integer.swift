//
//  Reverse-Integer.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Reverse-Integer
// MARK: 문제풀이
/*
import Foundation

class Solution {
    func reverse(_ x: Int) -> Int {
        var X = x
        if X<0 { X *= -1 }
        var Ans = 0
        while X > 0 {
            Ans = Ans*10 + X%10
            X /= 10
        }
        
        if Ans > 2147483647 { return 0 }
        return x>0 ? Ans : -Ans
    }
}
*/
