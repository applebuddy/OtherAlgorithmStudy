//
//  Day1_DataTypes.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day 1: Data Types
/// Using with cin.ignore();, getline(cin, string);

#include <iostream>
using namespace std;

int dataTypeStudy() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int N = 0;
    double D = 0.0;
    cin >> N >> D;
    
    // ✭ 문자열 입력 간 맨 마지막 불필요 공백 문자열을 무시하고 문자열을 읽는 방법
    // cin.ignore(), getline(cin,<문자열 값>) 을 사용한다.
    cin.ignore();
    string S = "";
    getline(cin, S);
    
    printf("%d\n",i+N); // 정수 값 출력
    printf("%.1lf\n",d+D); // 소수점 1자리까지 Double 타입 값을 출력
    printf("%s%s",s.c_str(),S.c_str()); // 두개의 문자열값 붙여서 출력
    
    return 0;
}
