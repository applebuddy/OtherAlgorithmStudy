//
//  TimeConversion.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

func timeConversion(s: String) -> String {
    let strArr = Array(s)
    var time = "\(strArr[0])\(strArr[1])"
    let min = "\(strArr[3])\(strArr[4])"
    let sec = "\(strArr[6])\(strArr[7])"
    let chk = "\(strArr[8])\(strArr[9])"
    if chk == "AM" {
        time = ((Int(time)! - 12) < 0) ? String("\(0)\(Int(time)!)") : String("\(0)\(Int(time)! - 12)")
    } else {
        time = ((Int(time)! + 12) >= 24) ? String(Int(time)!) : String(Int(time)! + 12)
    }
    return "\(time):\(min):\(sec)"
}
