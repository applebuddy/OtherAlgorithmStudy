//
//  DesignerPDFViewer.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Designer PDF Viewer : Implementation Problem

//  Sample Input)
//  1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
//  abc
//
//  Sample Output)
//  9

import Foundation

func designerPdfViewer(h: [Int], word: String) -> Int {
    let arr = word.sorted()
    var MAX = 0
    for i in arr.indices {
        let chIdx = Int(arr[i].unicodeScalars.first!.value - Unicode.Scalar("a").value)
        MAX = MAX < h[chIdx] ? h[chIdx] : MAX
    }
    return MAX * arr.count
}
