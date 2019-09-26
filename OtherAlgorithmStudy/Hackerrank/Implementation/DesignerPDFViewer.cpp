//
//  DesignerPDFViewer.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Designer PDF Viewer : Implementation Problem

//  Sample Input)
//  1 3 1 3 1 4 1 3 2 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5 5
//  abc
//
//  Sample Output)
//  9

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

int designerPdfViewer(vector<int> h, string word) {
    int MAX=0;
    for(int i=0; i<word.length(); i++) MAX = MAX < h[word[i]-'a'] ? h[word[i]-'a'] : MAX;
    return MAX*int(word.length());
}
