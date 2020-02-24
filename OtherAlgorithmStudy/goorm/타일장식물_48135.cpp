//
//  타일장식물_48135.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 타일장식물 48135
// MARK: DP 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    int N; cin>>N;
    vector<ll> DP(81, 1);
    for(int i=2; i<=N; i++) {
        DP[i] = DP[i-1] + DP[i-2];
    }
    printf("%lld\n", DP[N]*2 + DP[N-1]*2);
    return 0;
}
#endif
