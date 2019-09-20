//
//  Day3_IntroToConditionalStatements.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 20/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - IntroToConditionalStatements
/// MARK: 특정 조건에 따라 true, false 판단하기 기초문제

#include <stdio.h>

void introToConditionalStatements(int N) {
    bool flag = false;
    if(N%2==1) flag = true;
    else if(N>=6 && N<=20) flag = true;
    printf("%s", flag ? "Weird" : "Not Weird");
    return;
}
