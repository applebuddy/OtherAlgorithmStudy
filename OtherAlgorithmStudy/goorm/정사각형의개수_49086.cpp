//
//  정사각형의개수_49086.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 정사각형의개수_49086
// MARK: 문제풀이

#if 0
#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll N; cin>>N;
    ll Ans = 0;
    for(ll i=1; i<=N; i++) {
            Ans += i*i;
    }
    printf("%lld\n", Ans);
    return 0;
}
#endif
