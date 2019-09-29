//
//  PlusMinus.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <vector>
#include <iostream>
using namespace std;

void plusMinus(vector<int> arr) {
    double p=0.0,m=0.0,z=0.0;
    for(auto v : arr) {
        if(v>0) p++;
        else if(v==0) z++;
        else m++;
    }
    printf("%.6lf\n%.6lf\n%.6lf",p/arr.size(),m/arr.size(),z/arr.size());
    return;
}
