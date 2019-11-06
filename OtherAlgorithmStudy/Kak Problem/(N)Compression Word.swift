//
//  Compress Word.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 10/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - Stack<(Character,Int)>을 사용하면 쉽게 풀 수 있을 것 같다.

// KaK Problem 3)
func compressionWord(word: String, K: Int) -> String {
    // word 길이가 1이면 그대로 word를 반환한다.
    if word.count == 1 { return word }

    // Array로 변환하여 탐색(시간복잡도 O(1))에 사용한다.
    var arr = Array(word)

    var cnt = 1
    var idx = 0

    while idx < arr.count {
        if idx == arr.count - 1 { break }

        if arr[idx] == arr[idx + 1] {
            cnt += 1
            if cnt == K {
                if arr.count - K < 2 { break }
                arr.removeSubrange(idx - cnt + 2 ... idx + 1)
                cnt = 1
                idx = 0
                continue
            }
        }
        idx += 1
    }
    return String(arr)
}
