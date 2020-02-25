//
//  피보나치수열_43088.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 피보나치수열 43088
// MARK: C++ 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    vector<ll> DP(31,1);
    int N; cin>>N;
    int Ans = 0;
    for(int i=1; i<=N; i++) {
        if(i>=3) DP[i] = DP[i-1] + DP[i-2];
        Ans += DP[i];
    }
    printf("%lld",Ans);
    return 0;
}
#endif
