//
//  GenomicRangeQuery.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/12/08.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

import Foundation

// 62% 미해결, 실행시간 2/3로 줄인 버전

public func solution2(_ S: inout String, _ P: inout [Int], _ Q: inout [Int]) -> [Int] {
    var Ans = [Int]()
    let strArr = Array(S)
    let idxDic: [Character: Int] = ["A": 1, "C": 2, "G": 3, "T": 4]
    var cntArr = [Int](repeating: 0, count: strArr.count)
    var DP = [[Int]](repeating: [Int](repeating: 0, count: strArr.count), count: strArr.count)
    var minCnt = 123_456_789

    for i in strArr.indices {
        cntArr[i] = idxDic[strArr[i]]!
        minCnt = cntArr[i] < minCnt ? cntArr[i] : minCnt
        DP[i][i] = cntArr[i]
        if i != 0 { DP[0][i] = minCnt }
    }

    for i in P.indices {
        let sIdx = P[i], eIdx = Q[i]
        if DP[sIdx][eIdx] > 0 { Ans.append(DP[sIdx][eIdx]); continue }
        for j in sIdx + 1 ... eIdx {
            if DP[sIdx][j] > 0 {
                if DP[sIdx][j] == minCnt {
                    Ans.append(minCnt)
                    break
                } else { continue }
            }

            DP[sIdx][j] = min(DP[sIdx][j - 1], cntArr[j])
            if DP[sIdx][j] == minCnt {
                Ans.append(minCnt)
                break
            } else if j == eIdx {
                Ans.append(DP[sIdx][j])
                break
            }
        }
    }

    return Ans
}

public func solution(_ S: inout String, _ P: inout [Int], _ Q: inout [Int]) -> [Int] {
    var Ans = [Int]()
    var genDic: [Character: Int] = ["A": 1, "C": 2, "G": 3, "T": 4]
    var strArr = Array(S)
    var cntArr = [Int](repeating: 0, count: strArr.count)
    var chkArr = [[Int]](repeating: [Int](repeating: 0, count: strArr.count), count: strArr.count)

    for i in strArr.indices {
        cntArr[i] = genDic[strArr[i]]!
    }

    var idxArr = [(Int, Int)]()
    for i in P.indices {
        idxArr.append((P[i], Q[i]))
    }

    for i in chkArr.indices {
        chkArr[i][i] = cntArr[i]
        for j in i + 1 ..< chkArr.count {
            chkArr[i][j] = min(chkArr[i][j - 1], cntArr[j])
        }
    }

    for i in idxArr.indices {
        Ans.append(chkArr[idxArr[i].0][idxArr[i].1])
    }

    return Ans
}
