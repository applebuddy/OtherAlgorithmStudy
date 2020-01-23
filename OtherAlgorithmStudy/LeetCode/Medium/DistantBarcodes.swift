//
//  DistantBarcodes.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/18.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: DistantBarcodes Swift 문제풀이


import Foundation

class Solution {
    func rearrangeBarcodes(_ barcodes: [Int]) -> [Int] {
        var dic = [Int:Int]()
        var pv = [(Int,Int)]()
        var Ans = [Int]()
        if barcodes.count <= 2 { return barcodes }
        for i in barcodes.indices {
            dic[barcodes[i]] = (dic[barcodes[i]] ?? 0) + 1
        }
        
        for (key, value) in dic {
            pv.append((key, value))
        }
        
        pv.sort {
            $0.1 < $1.1 || ($0.1 == $1.1 && $0.0 < $1.0)
        }
        
        for i in barcodes.indices {
            if i == 0 {
                Ans.append(pv[pv.count-1].0)
                pv[pv.count-1].1 -= 1
            } else {
                if pv.last!.0 == Ans.last! {
                    // 만약 현재 사용가능한 숫자가 한가지 뿐이라면 그 숫자를 0, 2, 4, 6... 번째에 넣어주며 마무리한다.
                    if pv.count == 1 {
                        var idx = 0
                        for _ in 0..<pv[0].1 {
                            Ans.insert(pv[0].0, at: idx)
                            idx += 2
                        }
                        break
                    }
                    
                    // 두번째로 빈도수가 높은 값을 넣는다.
                    Ans.append(pv[pv.count-2].0)
                    pv[pv.count-2].1 -= 1
                    if pv[pv.count-2].1 <= 0 {
                        pv.remove(at: pv.count-2)
                    }
                } else {
                    Ans.append(pv[pv.count-1].0)
                    pv[pv.count-1].1 -= 1
                    if pv[pv.count-1].1 <= 0 {
                        pv.remove(at: pv.count-1)
                    }
                }
            }
            
            if pv.isEmpty { break }
        }
        
        return Ans
    }
}
 
