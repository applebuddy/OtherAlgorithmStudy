//
//  완전제곱수_43116.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/21.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 완전제곱수 43116
// MARK: Math 문제풀이

#if 0
#include <iostream>
#include <cmath>
using namespace std;
typedef long long ll;

int main() {
    ll M,N; cin>>M>>N;
    ll start = (ll)sqrt(M), sum = 0;
    ll first = 0;
    while(start*start <= N) {
        if(start*start >= M) {
            if(sum==0) first = start*start;
            sum += start*start;
        }
        start++;
    }
    
    printf("%lld %lld\n",first, sum);
    return 0;
}
#endif
