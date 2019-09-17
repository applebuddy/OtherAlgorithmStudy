//
//  Greedy Florist.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Greedy Florist
// MARK: 꽃의 가격 c: [Int], 구매할 사람의 수 k가 주어진다.
// k명은 c 배열에 기록된 모든 꽃을 구매 해야한다. 이때 욕심많은 꽃주점 아저씨때문에 각 사람 마다 N번째 이후 구매하는 꽃의 가격은 N배로 상승한다.
// -> 이때 k명이 a: [Int]의 모든 꽃을 구매할 수 있는 최소한의 비용을 출력하라!

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {
    int Ans = 0;
    sort(c.begin(), c.end(), greater<int>());
    for(int i=0; i<c.size(); i++) {
        printf("%d",c[i]);
        Ans += (i/k + 1) * c[i];
    }
    return Ans;
}
