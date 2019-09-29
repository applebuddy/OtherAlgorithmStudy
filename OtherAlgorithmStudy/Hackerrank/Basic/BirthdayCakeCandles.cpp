//
//  BirthdayCakeCandles.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int birthdayCakeCandles(vector<int> ar) {
    sort(ar.begin(), ar.end(), greater<int>());
    int maxValue = ar[0];
    int Ans = 1;
    for(int i=1; i<ar.size(); i++) {
        if(maxValue == ar[i]) Ans++;
        else break;
    }
    return Ans;
}
