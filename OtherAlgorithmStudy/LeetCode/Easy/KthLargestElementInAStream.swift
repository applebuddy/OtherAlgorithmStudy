//
//  KthLargestElementInAStream.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/16.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: KthLargestElement In A Stream 풀이답안

/*
 import Foundation

 class KthLargest {

    private var K = 0
    private var V = [Int]()

    init(_ k: Int, _ nums: [Int]) {
        K = k
        V = nums.sorted(by: >)
    }

    func add(_ val: Int) -> Int {
        V.binaryInsert(val)
        return V[K-1]
    }
 }

 extension Array where Element == Int {
    mutating func binaryInsert(_ val: Int) {
        var left = 0, right = self.count-1
        var mid = (left+right)/2
        while(left <= right) {
            mid = (left+right)/2
            if self[mid] >= val {
                left = mid + 1
            } else {
                right = mid - 1
            }
        }

        self.insert(val, at: right + 1)
    }
 }

 /**
      * Your KthLargest object will be instantiated and called as such:
      * let obj = KthLargest(k, nums)
      * let ret_1: Int = obj.add(val)
  */

 */
