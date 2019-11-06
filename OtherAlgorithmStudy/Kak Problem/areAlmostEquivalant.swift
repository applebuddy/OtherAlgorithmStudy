//
//  areAlmostEquivalant.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 10/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// KaK Problem 2)

func areAlmostEquivalent(s: [String], t: [String]) -> [String] {
    var Ans = [String]()
    for i in s.indices {
        // dic, dic1에 s, t 배열 내 string 별 빈도수를 기록한다.
        let sArr = Array(s[i])
        let tArr = Array(t[i])

        var dic = [Character: Int]()
        var chk = [(Character, Int)]()

        var flag = true

        // dic에 s 내 숫자 빈도수를 기록
        for i in sArr.indices {
            dic[sArr[i]] = (dic[sArr[i]] ?? 0) + 1
        }

        // t 내 숫자 빈도수만큼 반대로 가감
        for i in tArr.indices {
            dic[tArr[i]] = (dic[tArr[i]] ?? 0) - 1
        }

        // dic 딕셔너리 내 키 별 값의 절대값이 3보다 크면, 3 이상의 차이가 있으므로 NO를 출력한다.
        for (key, value) in dic {
            chk.append((key, value))
        }

        chk = chk.sorted {
            return $0.0 < $1.0
        }
        for i in chk.indices {
            if chk[i].1 == 0 { continue }
            if chk[i].1 > 3 {
                flag = false
                break
            }
        }

        if flag {
            Ans.append("YES")
        } else {
            Ans.append("NO")
        }
    }
    // 3보다 큰 차이가 존재하지 않으면 YES를 출력한다.
    return Ans
}
