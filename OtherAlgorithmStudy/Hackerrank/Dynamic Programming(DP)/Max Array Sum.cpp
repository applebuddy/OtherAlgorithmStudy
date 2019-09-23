//
//  Max Array Sum.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - MaxSubSetSum
// MARK: 인접하지 않는 숫자들의 최대합을 구해라!!
#include <iostream>
#include <vector>

using namespace std;

// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> arr) {
    if(arr.size() == 0) return 0;
    arr[0] = max(arr[0],0);
    if(arr.size() == 1) return arr[0];
    arr[1] = max(arr[0],arr[1]);
    
    for(int i=2; i<arr.size(); i++) {
        arr[i] = max(arr[i-1],arr[i]+arr[i-2]);
    }
    
    return arr[arr.size()-1];
}
