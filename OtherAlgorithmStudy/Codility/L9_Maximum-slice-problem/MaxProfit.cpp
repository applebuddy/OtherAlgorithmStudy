
//
//  MaxProfit.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - MaxProfit
// MARK: C++ 문제풀이

#if 0
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    if(A.empty()) return 0;
    int globalMax = 0;
    int localMax = 0;
    int minVal = A[0];
    for(int i=1; i<(int)A.size(); i++) {
        localMax = A[i] - minVal;
        minVal = minVal > A[i] ? A[i] : minVal;
        globalMax = localMax > globalMax ? localMax : globalMax;
    }
    return globalMax;
}
#endif
