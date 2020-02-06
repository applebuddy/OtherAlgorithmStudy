//
//  KDiffPairsInAnArray.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/06.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: K Diff Pairs In An Array
// MARK: - Set, twoPointer 사용 문제풀이

/*
import Foundation

struct Pair: Hashable {
    var a, b: Int
    init(_ a:Int, _ b:Int) {
        self.a = a
        self.b = b
    }
    
    var hashValue: Int = 0
    static func == (lhs: Pair, rhs: Pair) -> Bool {
        return lhs.a == rhs.a && lhs.b == rhs.b
    }
}

class Solution {
    func findPairs(_ nums: [Int], _ k: Int) -> Int {
        var ST = Set<Pair>()
        var arr = nums
        arr.sort()
        print(arr)
        var i = 0, j = 1
        while j < arr.count {
            if arr[j] - arr[i] == k {
                ST.insert(Pair(arr[i],arr[j]))
            }

            if arr[j] - arr[i] > k {
                i += 1
                if i == j { j += 1 }
            } else {
                j += 1
            }
        }
        
        return ST.count
    }
}
*/
