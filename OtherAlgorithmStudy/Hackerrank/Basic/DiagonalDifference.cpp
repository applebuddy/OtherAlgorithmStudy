//
//  DiagonalDifference.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - DiagonalDifference
//. * 좌/우 대각선 합의 차이를 출력하라!!

#include <vector>
#include <iostream>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int left=0,right=0;
    for(int i=0; i<arr.size(); i++) {
        left += arr[i][i];
        right += arr[i][arr.size()-i-1];
    }
    return abs(left-right);
}

