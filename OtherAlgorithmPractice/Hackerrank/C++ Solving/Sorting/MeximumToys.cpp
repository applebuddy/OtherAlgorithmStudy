//
//  MeximumToys.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// MARK: - MeximumToys Problem
// MARK: k원을 통해 최대한의 로봇을 구매할 수 있도록 하라!

int maximumToys(vector<int> prices, int k) {
    int ans = 0;
    sort(prices.begin(), prices.end());
    for(auto v : prices) {
        if(k >= v) {
            k -= v;
            ans++;
        } else {
            break;
        }
    }
    return ans;
}
