//
//  luck Balance.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - luck Balance

// MARK: 중요도(contests[i][1])가 1일 경우 k를 하나 감소시키고 contests[i][0] 점수를 더할 수 있다. k가 부족해지면 contests[i][0]만큼 점수를 감소해야 한다.

// * contests[i][1]이 0이면 contests[i][0]는 그냥 더해주면 된다. 이런 조건 하에서 받을 수 있는 가장 높은점수를 반환하라!

/// [0] , [1] 인덱스, $0/ $1 parameters 정렬 사용, 통과 답안
import Foundation

func luckBalance2(k: Int, contests: [[Int]]) -> Int {
    var Ans = 0
    var K = k
    let arr = contests.sorted {
        if $0[1] < $1[1] { return false }
        else if $0[1] == $1[1] {
            if $0[0] < $1[0] { return false }
        }
        return true
    }
    for i in arr.indices {
        if arr[i][1] == 1 {
            if K > 0 {
                Ans += arr[i][0]
                K -= 1
            } else {
                Ans -= arr[i][0]
            }
        } else {
            Ans += arr[i][0]
        }
    }
    return Ans
}

/// 단순 [0] 인덱스 정렬 사용, 통과 답안
func luckBalance(k: Int, contests: [[Int]]) -> Int {
    var cnt = k
    var ans = 0
    let sorted = contests.sorted { v1, v2 in
        v1[0] > v2[0]
    }

    for i in sorted.indices {
        if sorted[i][1] == 1 {
            if cnt > 0 {
                ans += sorted[i][0]
                cnt -= 1
            } else {
                ans -= sorted[i][0]
            }
        } else {
            ans += sorted[i][0]
        }
    }
    return ans
}
