//
//  PassingCars.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 13/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - PassingCars : PrefixSums
// MARK: 동쪽(0), 서쪽(1)으로 각각 지나간 차들의 쌍 갯수를 계산 하자!
// 배열 A의 인덱스 순서로 차가 지나간다.
// * 단 동쪽으로 지나간 뒤 서쪽으로 지나가는 차가 있어야 쌍을 이룰 수 있다.

#include <vector>
using namespace std;

int passingCars(vector<int> &A) {
    int Ans = 0;
    int cnt = 0;
    for(int i=0; i<A.size(); i++) {
        if(A[i]==1) Ans += cnt;
        else cnt++;
        if(Ans > 1000000000) return -1;
    }
    return Ans;
}
