//
//  GameOfStones.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - GameOfStones

// MARK: 돌멩이 게임 승자 판별하기

// Two players called  and  are playing a game with a starting number of stones. Player  always plays first, and the two players move in alternating turns. The game's rules are as follows:
// Stone : 2, 3, 5

// Complete the gameOfStones function below.
func gameOfStones(n: Int) -> String {
    return n % 7 == 0 || n % 7 == 1 ? "Second" : "First"
}
