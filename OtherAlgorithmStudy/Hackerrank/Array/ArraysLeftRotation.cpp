//
//  ArraysLeftRotation.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 23/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Arrays Left Rotation
// MARK: Array Rotation Problem
// - 1차원 배열, a를 좌측으로 d번 회전 시킨 뒤의 결과값을 구하라!!

#include <vector>

using namespace std;

/// 1차원 배열 회전 통과 답안 2)
vector<int> rotLeft2(vector<int> a, int d) {
    int n = (int)a.size();
    int flag = d%n;
    vector<int> Ans(n);
    for(int i=0; i<n; i++) {
        int idx = (flag+i)%n;
        Ans[i] = a[idx];
    }
    return Ans;
}

/// 1차원 배열 회전 통과 답안 1)
vector<int> rotLeft(vector<int> a, int d) {
    vector<int> Ans;
    int rot = d % a.size();
    for(int i=rot; i<a.size(); i++) {
        Ans.push_back(a[i]);
    }
    for(int i=0; i<rot; i++) {
        Ans.push_back(a[i]);
    }
    return Ans;
}
