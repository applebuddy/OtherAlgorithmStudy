//
//  TowerBreakers.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - Toewr Breakers

// MARK: 구슬게임과 같은 장르의 규칙성을 갖는 게임이론 문제

// MARK: A, B는 각각 n개, m높이의 타워 높이를 나눌 수 있는 값으로 제거를 한다. 제거할 수 없는 상황(0)의 플레이어는 패배한다.(1이 되면 탑 높이를 더이상 제거할 수 없음...)

// Complete the towerBreakers function below.
func towerBreakers(n: Int, m: Int) -> Int {
    // 1) 탑 높이가 1이라면, A플레이어는 시작도 전에 진다. B가 승리 (2)
    // 2) 탑이 짝수개라면? B가 승리...
    return ((m == 1) || (n % 2 == 0)) ? 2 : 1
}
