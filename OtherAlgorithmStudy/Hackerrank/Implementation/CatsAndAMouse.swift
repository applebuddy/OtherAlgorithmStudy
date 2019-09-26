//
//  CatsAndAMouse.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

func catAndMouse(x: Int, y: Int, z: Int) -> String {
    if abs(z - x) < abs(z - y) { return "Cat A" }
    else if abs(z - x) > abs(z - y) { return "Cat B" }
    else { return "Mouse C" }
}
