//
//  OddOccurrenciesInArray.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - OddOccurrenciesInArray
// MARK: 짝을 짓지 못하는 숫자를 구하라
// you can use includes, for example:
#include <vector>
#include <map>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;


int solution(vector<int> &A) {
    map<int,int> m;
    
    for(auto v : A) {
        m[v]++;
    }
    
    for(auto it=m.begin(); it!=m.end(); it++) {
        if(it->second%2 == 1) return it->first;
    }
    return 0;
}
