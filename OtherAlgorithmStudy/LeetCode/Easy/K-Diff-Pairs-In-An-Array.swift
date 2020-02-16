//
//  KDiffPairsInAnArray.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/06.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - K Diff Pairs In An Array

// MARK: Set, TwoPointer 활용 복습 문제풀이
/*
struct Pair: Hashable {
    var i = 0
    var j = 0
    init(_ i: Int, _ j: Int) {
        self.i = i
        self.j = j
    }
}

class Solution {
    func findPairs(_ nums: [Int], _ k: Int) -> Int {
        var dic = [Int:Int]()
        var Ans = Set<Pair>()
        
        var arr = nums.sorted()
        var i = 0, j = 1
        print(arr)
        while i < arr.count && j < arr.count {
            if arr[j] - arr[i] >= k {
                if arr[j] - arr[i] == k { Ans.insert(Pair(arr[i], arr[j])) }
                i += 1
            } else {
                j += 1
            }
            
            if i == j { j += 1 }
        }

        return Ans.count
    }
}
*/

// MARK: Set, twoPointer 사용 문제풀이

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
