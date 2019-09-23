//
//  RepeatedString.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 04/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - RepeatedString
// MARK: 문자열 내 반복되는 'a'의 갯수를 찾아라!!
// ex) 반복될 문자, "sadsdasd", 반복되는 길이 n의 문자열 내 'a'의 갯수를 반환

#include <iostream>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long aCount=0;
    for(auto v : s) {
        if(v == 'a') { aCount++; }
    }
    aCount = aCount * (n / s.length());
    for(int i=0; i<(n % s.length()); i++) {
        if(s[i] == 'a') { aCount++; }
    }
    return aCount;
}

