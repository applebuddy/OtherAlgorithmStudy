//
//  Alternating Characters.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

int alternatingCharacters(string s) {
    int ans = 0;
    for(int i=0; i<s.length()-1; i++) {
        if(s[i]==s[i+1]) {
            ans++;
        }
    }
    return ans;
}
