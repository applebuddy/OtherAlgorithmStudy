//
//  AVeryBigSum.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

long aVeryBigSum(vector<long> ar) {
    long sum=0;
    for(auto v : ar) {
        sum+=v;
    }
    return sum;
}
