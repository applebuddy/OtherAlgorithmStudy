//
//  Day_5_Loops.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 22/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day5_Loop : Basic Loop Example
/// MARK: 입력값, n 에 대한 1~10 곱한 값을 순차적으로 출력하라!

#include <iostream>

using namespace std;

int loopExample()
{
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=1; i<=10; i++) {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}


