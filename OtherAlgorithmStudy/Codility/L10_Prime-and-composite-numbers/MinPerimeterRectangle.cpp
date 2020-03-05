//
//  MinPerimeterRectangle.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/05.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Min-Perimeter-Ractangle
// MARK: math C++ 문제풀이

#if 0
#include <iostream>
using namespace std;
typedef long long ll;

int solution(int N) {
    ll Ans = 2e9;
    if(N==1) return 4;
    for(int i=1; i*i<=N; i++) {
        if(N%i==0) {
            int peri = (N/i)*2 + i*2;
            Ans = Ans > peri ? peri : Ans;
        }
    }
    return Ans;
}
#endif
