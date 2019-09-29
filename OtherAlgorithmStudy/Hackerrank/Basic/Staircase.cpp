//
//  Staircase.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - StairCase
//  * 계단 출력하기 연습
#include <iostream>
using namespace std;

void staircase(int n) {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    for(int x=1; x<=n; x++) {
        string s1(n-x,' ');
        string s2(x,'#');
        printf("%s%s",s1.c_str(),s2.c_str());
        if(x!=n) printf("\n");
    }
    return;
}
