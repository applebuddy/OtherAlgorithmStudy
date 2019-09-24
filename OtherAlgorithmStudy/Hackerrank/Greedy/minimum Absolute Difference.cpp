//
//  minimum Absolute Difference.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/// min() 함수 미사용 버전 통과 답안)
int minimumAbsoluteDifference2(vector<int> arr) {
    int Ans = 2100000000;
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size()-1; i++) {
        int dif = abs(arr[i]-arr[i+1]);
        if(dif < Ans) Ans = dif;
    }
    return Ans;
}

/// min() 함수 사용 버전 통과 답안)
int minimumAbsoluteDifference(vector<int> arr) {
    int minV = 2100000000;
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0; i<arr.size()-1; i++) {
        minV = min(minV,abs(arr[i]-arr[i+1]));
    }
    return minV;
}
