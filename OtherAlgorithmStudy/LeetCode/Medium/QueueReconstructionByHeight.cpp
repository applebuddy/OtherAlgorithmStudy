//
//  QueueReconstructionByHeight.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 07/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - QueueReconstructionByHeight
#if 0
#include <vector>
#include <queue>
using namespace std;

class Compare {
    public:
    template <class T=vector<int>>
    bool operator() (T &a, T &b) const {
        return a[0]<b[0] || (a[0]==b[0] && a[1]<b[1]);
    }
};

class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(),Compare());
        
        for(int i=people.size()-1; i>=0; i--) {
            vector<int> nowMan = people[i];
            int cnt=0;
            for(int j=i-nowMan[1]; j<i; j++) if(j>=0 && people[j][0]==nowMan[0]) cnt++;
            for(int j=i; j<i+nowMan[1]-cnt; j++) people[j] = people[j+1];
            people[i+nowMan[1]-cnt] = nowMan;
        }
        return people;
    }
};
#endif
