//
//  LeftRotation.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 04/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Arrays Left Rotation

// MARK: Array Rotation Problem

// - 1차원 배열, a를 좌측으로 d번 회전 시킨 뒤의 결과값을 구하라!!
import Foundation

// Complete the rotLeft function below.
func rotLeft(a: [Int], d: Int) -> [Int] {
    var a1 = a
    // 회전이 완료 된 뒤의 회전 상태를 확인하기위해 회전횟수 % a배열 길이 == 값, `rot`을 구한다.
    let rot = d % a.count
    // ✓ `rot` 만큼만 좌측 회전한다는 것을 0 ~ rot-1 범위의 값을 잘라 뒤로 붙이면 끝난다.
    a1.removeSubrange(0 ... rot - 1)
    for i in 0 ..< rot {
        a1.append(a[i])
    }
    return a1
}
