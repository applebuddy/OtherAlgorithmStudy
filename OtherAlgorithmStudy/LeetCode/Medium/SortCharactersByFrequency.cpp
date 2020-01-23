//
//  SortCharactersByFrequency.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/23.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: SortCharacterByFrequency 문제풀이

#if 0
#include <string>
#include <string>
#include <map>
using namespace std;

typedef pair<char,int> Pair;

class Solution {
public:
    string frequencySort(string s) {
        map<char,int> MP;
        vector<Pair> PV;
        string Ans = "";
        for(int i=0; i<s.length(); i++) MP[s[i]]++;
        for(auto &mp : MP) PV.push_back({mp.first, mp.second});
        sort(PV.begin(), PV.end(), [](const Pair &a, const Pair &b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        });
        
        for(auto v: PV) Ans += string(v.second,v.first);
        return Ans;
    }
};
#endif
