//
//  SortCharactersByFrequency.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/23.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Sort-Character-By-Frequency 문제풀이 + 주석추가

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
        // 시퀀스 요소의 빈도수를 MP에 기록
        for(int i=0; i<s.length(); i++) MP[s[i]]++;
        
        // MP의 빈도수 기록을 PV vector에 기록
        for(auto &mp : MP) PV.push_back({mp.first, mp.second});
        
        // 빈도수가 높은순으로, 만약 빈도수가 동일하다면 사전순으로 정렬한다.
        sort(PV.begin(), PV.end(), [](const Pair &a, const Pair &b) {
            return a.second > b.second || (a.second == b.second && a.first < b.first);
        });
        
        // 정렬된 문자의 값을 문자열 변수 Ans에 추가 후 정답을 반환한다.
        for(auto v: PV) Ans += string(v.second,v.first);
        return Ans;
    }
};
#endif
