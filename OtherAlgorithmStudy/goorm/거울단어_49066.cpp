//
//  거울단어_49066.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 거울단어_49066
// MARK: 문제풀이

#if 0
#include <iostream>
#include <string>
using namespace std;
int main() {
    int T; cin>>T;
    while(T--) {
        string S; cin>>S;
        int len = (int)S.length();
        bool flag = true;
        if(len==1) {
            if(!(S[0] == 'i' || S[0] == 'l' || S[0] == 'm' || S[0] == 'n' || S[0] == 'o' || S[0] == 'u' || S[0] == 'v' || S[0] == 'w' || S[0] == 'x')) flag = false;
        }
        for(int i=0; i<len/2; i++)
        {
            if((S[i]=='b' && S[len-i-1]=='d') || (S[i]=='d' && S[len-i-1]=='b') || (S[i]=='p' && S[len-i-1]=='q') || (S[i]=='q' && S[len-i-1]=='p') || (S[i]=='s' && S[len-i-1]=='z') || (S[i]=='z' && S[len-i-1]=='s')) continue;
            if(S[i] != S[len-i-1])
            {
                flag = false;
                break;
            }
        }
        printf("%s\n", flag ? "Mirror" : "Normal");
    }
    return 0;
}
#endif
