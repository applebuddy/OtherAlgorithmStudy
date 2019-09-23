//
//  Pairs.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Pairs : Seaching Problem
// MARK: k만큼의 간격이 있는 쌍의 갯수를 구하라!

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Complete the pairs function below.
int pairs(int k, vector<int> arr) {
    sort(arr.begin(), arr.end());
    int Ans = 0;
    for(int i=0; i<arr.size()-1; i++) {
        for(int j=i+1; j<arr.size(); j++) {
            if(abs(arr[i]-arr[j])==k) {
                Ans++;
            } else if(abs(arr[i]-arr[j])>k) {
                break;
            }
        }
    }
    return Ans;
}
