//
//  FrogJump.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Frog Jump

// MARK: 개구리는 X -> Y로 이동한다. 한번 점프마다 D만큼 이동하여 Y에 도달해야한다 몇번 점프해야 도달할까?

import Foundation

public func frogJump(_ X: Int, _ Y: Int, _ D: Int) -> Int {
    if X == Y { return 0 }
    return (Y - X) % D == 0 ? (Y - X) / D : (Y - X) / D + 1
}
