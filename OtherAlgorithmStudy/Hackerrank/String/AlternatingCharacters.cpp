//
//  Alternating Characters.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Alternating Characters : String Problem
/// MARK: 붙은 먼자 간 같은 문자가 없게 문자를 제거할때 제거해야할 최소 알파벳의 갯수를 출력하라!!

#include <iostream>
#include <algorithm>

using namespace std;

int alternatingCharacters(string s) {
    int Ans = 0;
    for(int i=0; i<s.length()-1; i++) {
        if(s[i]==s[i+1]) Ans++;
    }
    return Ans;
}
