//
//  MinStack.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/02.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Min Stack

// MARK: - 스택 2개 활용 문제풀이

/*
import Foundation

class MinStack {

    var STK = [Int]()
    var minSTK = [Int]()
    
    init() {
        
    }
    
    func push(_ x: Int) {
        STK.append(x)
        if minSTK.isEmpty || minSTK.last! >= x {
            minSTK.append(x)
        }
    }
    
    func pop() {
        if STK.last! == minSTK.last! {
            minSTK.removeLast()
        }
        STK.removeLast()
    }
    
    func top() -> Int {
        return STK.last!
    }
    
    func getMin() -> Int {
        return minSTK.last!
    }
}
 */

/**
 * Your MinStack object will be instantiated and called as such:
 * let obj = MinStack()
 * obj.push(x)
 * obj.pop()
 * let ret_3: Int = obj.top()
 * let ret_4: Int = obj.getMin()
 */
