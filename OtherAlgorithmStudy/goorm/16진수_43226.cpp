//
//  16진수_43226.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 16진수 43226
// MARK: 문제풀이

#if 0
#include <iostream>
#include <string>
using namespace std;

string getHexa(int N) {
    string S;
    while(N>0) {
        if(N%16>=10) S = (char)('a'+(N%16)-10) + S;
        else S = to_string(N%16) + S;
        N /= 16;
    }
    return S;
}

int main() {
    int N; cin>>N;
    printf("%s\n",getHexa(N).c_str());
    return 0;
}
#endif
