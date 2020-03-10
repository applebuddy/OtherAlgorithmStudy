//
//  1등과2등_49072.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/11.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 1등과 2등 49072
// MARK: C++ 문제풀이

#if 0
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    string S; cin>>S;
    pair<int,int> Chk[2] = {{2e9,-1}, {2e9,-1}};
    for(int i=0; i<(int)S.length()-1; i++) {
        if(S[i]=='1' && S[i+1]=='2') {
            Chk[0].first = min(Chk[0].first, i);
            Chk[0].second = max(Chk[0].second, i);
        } else if(S[i]=='2' && S[i+1]=='1') {
            Chk[1].first = min(Chk[1].first, i);
            Chk[1].second = max(Chk[1].second, i);
        }
        if(Chk[0].first == 2e9 || Chk[1].first == 2e9) continue;
        if(abs(Chk[0].first-Chk[1].second)>=2 || abs(Chk[1].first-Chk[0].second)>=2) return !printf("Yes\n");
    }
    
    printf("No\n");
    
    return 0;
}
#endif
