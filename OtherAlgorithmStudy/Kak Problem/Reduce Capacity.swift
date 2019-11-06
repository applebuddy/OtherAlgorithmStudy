//
//  Reduce Capacity.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 10/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// KaK Problem 1)

func reduceCapacity(model: [Int]) -> Int {
    var hash = [Int: Int]()
    var arr = [Int]()
    let flag = (model.count % 2 == 0) ? model.count / 2 : model.count / 2 + 1
    var cnt = 0
    var Ans = 0

    for i in model.indices {
        hash[model[i]] = (hash[model[i]] ?? 0) + 1
    }

    for (_, value) in hash {
        arr.append(value)
    }

    arr = arr.sorted {
        return $0 > $1
    }

    for i in arr.indices {
        print(arr[i])
        cnt += arr[i]
        Ans += 1
        if cnt > flag {
            print("Ans : \(Ans)")
            return Ans
        }
    }
    print("Ans : \(Ans)")
    return Ans
}
