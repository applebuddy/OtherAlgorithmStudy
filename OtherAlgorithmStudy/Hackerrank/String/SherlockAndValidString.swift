//
//  SherlockAndValidString.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 24/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Sherlock and the Valide String

// MARK: 하나의 알파벳 제거만으로(제거 안하거나) 알파벳의 갯수가 일치하도록 할 수 있는 지 확인 하여 가능하면 "Yes", 불가능 시 "NO"를 반환하라!!

import Foundation

func sherlockAndValidString(s: String) -> String {
    let arr = Array(s)
    var dic = [Character: Int]()
    var cnt = [Int: Int]()
    for i in arr.indices {
        dic[arr[i]] = (dic[arr[i]] ?? 0) + 1
    }

    for (_, value) in dic {
        cnt[value] = (cnt[value] ?? 0) + 1
    }

    if cnt.count == 1 { return "YES" }
    else if cnt.count == 2 {
        var cntArr = [(Int, Int)]()
        for (key, value) in cnt { cntArr.append((key, value)) }
        if abs(cntArr[0].0 - cntArr[1].0) == 1
            && (cntArr[0].1 == 1 || cntArr[1].1 == 1)
            || ((cntArr[0].0 == 1 && cntArr[0].1 == 1)
                || (cntArr[1].0 == 1 && cntArr[1].1 == 1)) {
            return "YES"
        } else { return "NO" }
    } else { return "NO" }
}
