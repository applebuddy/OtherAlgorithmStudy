//
//  SpllitAStringInBalancedStrings.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 19/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <string>
using namespace std;

class SplitAStringInBalancedStrings {
public:
    int balancedStringSplit(string s) {
        int lCount=0, rCount=0, Ans=0;
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='L') {
                lCount++;
                if(lCount==rCount) {
                    Ans++;
                    lCount=0, rCount=0;
                }
            } else {
                rCount++;
                if(lCount==rCount) {
                    Ans++;
                    lCount=0, rCount=0;
                }
            }
        }
        return Ans;
    }
};
