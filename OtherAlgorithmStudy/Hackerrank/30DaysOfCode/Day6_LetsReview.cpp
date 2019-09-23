//
//  Day6_LetsReview.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 23/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day_6_LetsReview
/// MARK: 짝수, 홀두번째 인덱스의 문자열을 쪼개서 출력하라!!!

#include <stdio.h>
#include <cmath>
#include <vector>
#include <iostream>
#include <string>
using namespace std;

int separateEvenAndOdd() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int T;
    cin >> T;
    while(T--) {
        string tempStr = "";
        cin >> tempStr;
        string first, second;
        for(int i=0; i<tempStr.length(); i++) {
            if(i%2==0) first += tempStr[i];
            else second += tempStr[i];
        }
        printf("%s %s\n",first.c_str(), second.c_str());
    }
    return 0;
}

