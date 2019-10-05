//
//  Day16_Exceptions-StringToInteger.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day16_Exceptions - String to Integer

#include <iostream>
#include <string>
using namespace std;

void canConvertStringToInt(){
    string S;
    cin >> S;
    try {
        // 에러 발생 시 catch 구문으로 넘어감.
        int num = stoi(S);
        printf("%d\n",num);
    } catch(exception &e) {
        printf("Bad String\n");
    }
    return;
}

