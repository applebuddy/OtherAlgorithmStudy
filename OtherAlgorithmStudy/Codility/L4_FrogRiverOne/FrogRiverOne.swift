//
//  FrogRiverOne.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 13/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - FrogRiverOne

// MARK: Frog River One Descriptions

//    A small frog wants to get to the other side of a river. The frog is initially located on one bank of the river (position 0) and wants to get to the opposite bank (position X+1). Leaves fall from a tree onto the surface of the river.
//
//    You are given an array A consisting of N integers representing the falling leaves. A[K] represents the position where one leaf falls at time K, measured in seconds.
//
//    The goal is to find the earliest time when the frog can jump to the other side of the river. The frog can cross only when leaves appear at every position across the river from 1 to X (that is, we want to find the earliest moment when all the positions from 1 to X are covered by leaves). You may assume that the speed of the current in the river is negligibly small, i.e. the leaves do not change their positions once they fall in the river.
//
//    For example, you are given integer X = 5 and array A such that:
//
//    A[0] = 1
//    A[1] = 3
//    A[2] = 1
//    A[3] = 4
//    A[4] = 2
//    A[5] = 3
//    A[6] = 5
//    A[7] = 4
//    In second 6, a leaf falls into position 5. This is the earliest time when leaves appear in every position across the river.

// MARK: - Dictionary 사용 답안

import Foundation

public func solution(_ X: Int, _ A: inout [Int]) -> Int {
    var dic = [Int: Int]()
    for i in A.indices {
        dic[A[i]] = (dic[A[i]] ?? 0) + 1
        if dic.count >= X { return i }
    }
    return -1
}

/*
 // MARK: - Set 사용 답안
 public func frogRiverOne(_ X: Int, _ A: inout [Int]) -> Int {
    var setV = Set<Int>()
    for i in A.indices {
        setV.insert(A[i])
        if setV.count == X {
            return i
        }
    }
    return -1
 }
 */
