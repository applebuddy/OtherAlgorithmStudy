//
//  IsomorphicStrings.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,pair<int,int>> MP;
        map<char,pair<int,int>> MP2;
        if(s.length() != t.length()) return false;
        
        for(int i=0; i<s.length(); i++) {
            MP[s[i]].first++;
            MP2[t[i]].first++;
            if(MP[s[i]].first!=MP2[t[i]].first || MP[s[i]].second!=MP2[t[i]].second) return false;
            MP[s[i]].second = i;
            MP2[t[i]].second = i;
        }
        return true;
    }
};
#endif
