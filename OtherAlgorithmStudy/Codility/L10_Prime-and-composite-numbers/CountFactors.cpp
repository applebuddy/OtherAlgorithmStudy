//
//  CountFactors.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - CountFactors
// MARK: math C++ 문제풀이

#if 0
#include <iostream>
using namespace std;
typedef long long ll;

int solution(int N) {
    ll Ans = 0;
    for(ll i=1; i*i<=N; i++) {
        if(N % i == 0) {
            Ans++;
            if(i*i < N) Ans++;
        }
    }
    return Ans;
}
#endif
