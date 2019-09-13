//
//  PermCheck.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 13/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <algorithm>
#include <vector>
using namespace std;

int checkPermutation(vector<int> &A) {
    int Ans = 1;
    sort(A.begin(), A.end());
    for(int i=1; i<=int(A.size()); i++) {
        if(i!=A[i-1]) {
            Ans = 0;
            break;
        }
    }
    return Ans;
}
