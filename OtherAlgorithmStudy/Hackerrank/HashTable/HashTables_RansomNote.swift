//
//  HashTables_RansomNote.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 23/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Hash Tables: Ransom Note

// MARK: magazine의 문자열 요소들이 note에 전부 포함하고 있는지를 판별해라! 전부 포함한다면 "Yes", 어느하나라도 미포함 시 "No"를 출력

import Foundation

func checkMagazine(magazine: [String], note: [String]) {
    var dic = [String: Int]()
    for (_, value) in magazine.enumerated() {
        dic[value] = (dic[value] ?? 0) + 1
    }

    for (_, value) in note.enumerated() {
        dic[value] = (dic[value] ?? 0) - 1
    }

    for (_, value) in note.enumerated() {
        if dic[value]! < 0 { print("No"); return }
    }
    print("Yes")
    return
}
