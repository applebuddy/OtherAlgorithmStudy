//
//  QueueExam.swift
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 03/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// MARK: - Queue

public struct Queue<T> {
    private(set) var element: [T] = []

    mutating func push(value: T) {
        element.append(value)
    }

    mutating func pop() -> T {
        return element.removeFirst()
    }
}
