//
//  GradingStudents.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

func gradingStudents(grades: [Int]) -> [Int] {
    return grades.map {
        $0 % 5 >= 3 ? $0 + (5 - ($0 % 5)) : $0
    }
}
