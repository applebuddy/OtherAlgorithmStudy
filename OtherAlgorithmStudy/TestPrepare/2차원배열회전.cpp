//
//  2차원배열회전.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 23/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// 배열회전 알
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void rotateArray(int K, vector<vector<int>> NAME) {
    bool flag = (K > 0) ? true : false;
    
    int size = int(NAME.size());
    vector<vector<int>> TMP(size,vector<int>(size,0));
    for(int T=0; T<abs(K)%4; T++) {
        for(int i=0; i<size; i++) {
            for(int j=0; j<size; j++) {
                if(flag) TMP[i][j] = NAME[size-j-1][i]; // 순방향 90도 회전
                else TMP[i][j] = NAME[j][size-i-1]; // 역방향 90도 회전
            }
        }
        NAME = TMP;
    }
    
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            printf("%d ",NAME[i][j]);
        }
        printf("\n");
    }
}

//int main() {
//    rotateArray(-1, {{1,2,3}, {4,5,6}, {7,8,9}});
//    return 0;
//}

