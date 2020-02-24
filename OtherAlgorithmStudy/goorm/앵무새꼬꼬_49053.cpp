//
//  앵무새꼬꼬_49053.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 앵무새꼬꼬_49053
// MARK: 문제풀이

#if 0
#include <iostream>
#include <string>
using namespace std;
int main() {
    int T; cin>>T;
    cin.ignore();
    while(T--) {
        string S="", Ans="";
        getline(cin, S, '\n');
        for(int i=0; i<S.length(); i++) {
            if(S[i]=='a' || S[i]=='A' || S[i]=='e' || S[i]=='E' || S[i]=='i' || S[i]=='I' || S[i]=='o' || S[i]=='O' || S[i]=='u' || S[i]=='U') Ans += S[i];
        }
        
        printf("%s\n",Ans.length()>0 ? Ans.c_str() : "???");
    }
    return 0;
}
#endif
