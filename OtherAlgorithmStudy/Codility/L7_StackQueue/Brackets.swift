//
//  Brackets.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Brackets

// MARK: 문자열 S에는 '{', '(', '[', ']', '}', ')' 등이 들어있다. 이 문자열이 괄호가 성립하는지 확인하라!

///       => 올바른 괄호면 1, 올바르지 않으면 0 출력

/// 효율성, 정확성 통과
/// * 답안 복잡도 O(N)

import Foundation

public func Brackets(_ S: String) -> Int {
    var arr = Array(S)
    var stk = [Character]()
    for i in arr.indices {
        if arr[i] == "(" || arr[i] == "{" || arr[i] == "[" {
            stk.append(arr[i])
        } else {
            if stk.isEmpty { return 0 }
            if (stk.last! == "(" && arr[i] == ")")
                || (stk.last! == "[" && arr[i] == "]")
                || (stk.last! == "{" && arr[i] == "}") {
                stk.removeLast()
            } else { return 0 }
        }
    }
    return stk.isEmpty ? 1 : 0
}
