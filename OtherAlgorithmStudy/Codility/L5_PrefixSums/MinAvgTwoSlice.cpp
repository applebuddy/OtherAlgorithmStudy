//
//  MinAvgTwoSlice.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Min-Avg-Two-Slice
// MARK: 단순 구간합 배열 활용 60% 답안 -> 세그먼트트리 등 더 나은 방안 필요

#if 0
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    vector<int> DP((int)A.size()+1, 0);
    double Ans = 2e9, start = 0;
    
    for(int i=1; i<=(int)A.size(); i++) {
        DP[i] = DP[i-1] + A[i-1];
    }
    
    for(int i=0; i<=(int)A.size()-2; i++) {
        for(int j=i+2; j<=(int)A.size(); j++) {
            double val = (DP[j] - DP[i]) / (double)(j-(i));
            if(Ans > val) {
                Ans = val;
                start = i;
            }
        }
    }
    
    return start;
}
#endif
