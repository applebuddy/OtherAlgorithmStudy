//
//  JumpingOnTheClouds.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 22/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - JumpingOnTheClouds

// MARK: 1,2 칸을 점프가능한 영희, 장애물을 피하고 갈 수 있는 최단 횟수를 구하라!

// ex) 0 1 0 0 0 1 0 => 0->2->4->6 3번의 점프만에 도착!

import Foundation

func jumpingOnClouds(c: [Int]) -> Int {
    var cnt = 0
    var Ans = 0
    while true {
        if cnt < c.count - 2, c[cnt + 2] == 0 {
            cnt += 2
            Ans += 1
        } else {
            cnt += 1
            Ans += 1
        }
        print(cnt)
        if cnt == c.count - 1 { break }
    }
    return Ans
}
