//
//  Triangle.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 15/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Triangle : Sorting Problem
// MARK: 배열 내 숫자 중 세개의 조건의 삼각형을 이룰 수 있는 조건을 충족하는 지 확인하라!!

// * 삼각형이 되는 세 변의 길이 조건 ▼
//    A[P] + A[Q] > A[R],
//    A[Q] + A[R] > A[P],
//    A[R] + A[P] > A[Q].

// 복잡도 O(NlogN)
#include <algorithm>
#include <vector>

using namespace std;

int isTriangle(vector<int> &A) {
    if(A.size() < 3) return 0;
    sort(A.begin(), A.end());
    
    for(int i=0; i<int(A.size()-2); ++i) {
        int P = A[i];
        int Q = A[i+1];
        int R = A[i+2];
        if(P>R-Q) return 1;
    }
    return 0;
}
