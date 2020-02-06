//
//  TopKFrequentElements.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/06.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Top-K-Frequent-Elements

// MARK: - Hash 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> MP;
        vector<pair<int,int>> FV;
        vector<int> Ans;
        for(auto &v: nums) MP[v]++;
        for(auto &mp: MP) FV.push_back({mp.first, mp.second});
        sort(FV.begin(), FV.end(), [](pair<int,int> &a, pair<int,int> &b) {
            return a.second > b.second;
        });
        
        for(int i=0; i<k; i++) {
            if(i>=FV.size()) break;
            Ans.push_back(FV[i].first);
        }
        
        return Ans;
    }
};
#endif
