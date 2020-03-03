//
//  Nesting.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Nesting
// MARK: stack C++ 문제풀이

#if 0
#include <string>
using namespace std;

int solution(string &S) {
    int STK = 0;
    for(int i=0; i<(int)S.length(); i++) {
        if(S[i]=='(') {
            STK++;
        } else {
            if(STK==0) return 0;
            else STK--;
        }
    }
    return STK==0 ? 1 : 0;
}
#endif
