//
//  MiniMaxSum.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    long long maxSum=0,minSum=0;
    for(int i=0; i<arr.size(); i++) {
        if(i!=0) maxSum+=arr[i];
        if(i!=arr.size()-1) minSum+=arr[i];
    }
    printf("%lld %lld\n",minSum,maxSum);
}
