//
//  TopKFrequentWords.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/21.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: TopKFrequentWords 문제풀이
#if 0
#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef pair<string,int> Pair;

class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> MP;
        vector<Pair> PV;
        vector<string> Ans;
        for(auto &v : words) MP[v]++;
        for(auto &mp : MP) PV.push_back({mp.first, mp.second});
        sort(PV.begin(), PV.end(), [](Pair &a, Pair &b) {
            return (a.second > b.second || (a.second == b.second && a.first < b.first));
        });

        for(int i=0; i<k; i++) Ans.push_back(PV[i].first);
        return Ans;
    }
};
#endif
