//
//  MinimumGeneticMutation.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 07/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - MinimumGeneticMutation
//  - BFS사용 100% / 100% 통과답안
#include <set>
#include <vector>
#include <string>
#include <queue>
using namespace std;

class Solution {
public:
    
    bool compare(const string &S, const string &temp) {
        int cnt=0;
        for(int i=0; i<S.length(); i++) {
            if(S[i]!=temp[i]) cnt++;
            if(cnt>1) break;
        }
        
        return cnt==1;
    }
    
    int minMutation(string start, string end, vector<string>& bank) {
        queue<pair<string,int>> Q;
        Q.push({start,0});
        set<string> st(bank.begin(), bank.end());
        
        while(!Q.empty()) {
            string temp = Q.front().first;
            int score = Q.front().second;
            Q.pop();
            
            if(temp==end) return score;
            
            for(auto s: st) {
                if(compare(s, temp)) {
                    st.erase(s);
                    Q.push({s,score+1});
                }
            }
        }
        
        return -1;
    }
};
