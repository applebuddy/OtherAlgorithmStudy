//
//  달팽이1_43180.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/21.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 달팽이(1) 43180
// MARK: 문제풀이

#if 0
#include <iostream>
using namespace std;
int main() {
    double H,F,U,D; cin>>H>>U>>D>>F;
    double dRatio = U * F / 100.0;
    double nowH = 0;
    int day = 0;
    while(nowH < H) {
        day++;
        nowH += U;
        if(nowH >= H) break;
        nowH -= D;
        U -= dRatio;
        if(nowH < 0) return !printf("Failure %d",day);
    }
    
    printf("Success %d\n",day);
    return 0;
}
#endif
