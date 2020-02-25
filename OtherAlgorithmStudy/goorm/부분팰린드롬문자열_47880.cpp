//
//  부분팰린드롬문자열_47880.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 부분팰린드롬문자열 47880
// MARK: Manacher's C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int manachers(string S) {
    int r = 0, p = 0;
    int Ans = 0;
    vector<int> DP(S.length(), 0);
    for(int i=0; i<S.length(); i++) {
        if(i<=r) DP[i] = min(DP[2*p-i], r-i);
        while(i-DP[i]-1>=0 && i+DP[i]+1 && S[i-DP[i]-1]==S[i+DP[i]+1]) DP[i]++;
        if(r < DP[i]+i) {
            p = i;
            r = DP[i]+i;
            Ans = Ans < DP[i] ? DP[i] : Ans;
        }
    }
    return Ans;
}

int main() {
    string str; cin>>str;
    string S = "@";
    for(int i=0; i<str.length(); i++) {
        S += str[i];
        S += '@';
    }
    
    int Ans = manachers(S);
    printf("%d\n",Ans);
    return 0;
}
#endif
