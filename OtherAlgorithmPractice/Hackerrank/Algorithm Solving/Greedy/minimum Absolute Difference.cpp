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

// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifference(vector<int> arr) {
    int minV = 2000000000;
    sort(arr.begin(), arr.end(), greater<int>());
    for(int i=0; i<arr.size()-1; i++) {
        minV = min(minV,abs(arr[i]-arr[i+1]));
    }
    return minV;
}
