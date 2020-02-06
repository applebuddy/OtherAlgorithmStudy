//
//  InsertDeleteGetRandomO(1).swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/17.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: InsertDeleteGetRandomO(1) Swift 풀이답안


 import Foundation

 class RandomizedSet {

    private var dic = [Int:Int]()
    private var arr = [Int]()

 /** Initialize your data structure here. */
    init() {
    }

 /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    func insert(_ val: Int) -> Bool {

        if let index = dic.index(forKey: val) { return false }
        else {
            arr.append(val)
            let lastIndex = arr.count - 1
            dic[val] = lastIndex
            return true
        }
    }

 /** Removes a value from the set. Returns true if the set contained the specified element. */
    func remove(_ val: Int) -> Bool {

        if let index = dic.index(forKey: val) {
            let lastIndex = arr.count - 1
            let valIndex = dic[val]!
            let lastVal = arr.last!
            dic[lastVal] = valIndex
            dic[val] = lastIndex
            arr.swapAt(valIndex, lastIndex)
            arr.removeLast()
            dic.removeValue(forKey: val)
            return true
        }
        else { return false }
    }

 /** Get a random element from the set. */
    func getRandom() -> Int {
        let randVal = Int.random(in: 0..<arr.count)
        return arr[randVal]
    }
 }

 /**
   * Your RandomizedSet object will be instantiated and called as such:
   * let obj = RandomizedSet()
   * let ret_1: Bool = obj.insert(val)
   * let ret_2: Bool = obj.remove(val)
   * let ret_3: Int = obj.getRandom()
  */
 
