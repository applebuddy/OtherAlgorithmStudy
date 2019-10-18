//
//  JewelsAndStones.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 19/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <string>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

class JewelsAndStones {
public:
    /// MARK: - 벡터 사용 통과답안, 100.00% / 47.50%
    int numJewelsInStonesWithVector(string J, string S) {
        vector<int> V(123,0);
        int Ans = 0;
        for(auto s: J) V[s]++;
        for(auto s: S) if(V[s]>0) Ans++;
        return Ans;
    }
    
    /// MARK: 맵 사용 통과답안, 65.36% / 33.75%
    int numJewelsInStonesWithMap(string J, string S) {
        map<char,int> MP;
        int Ans = 0;
        for(auto s: J) MP[s]++;
        for(auto s: S) if(MP[s]>0) Ans++;
        return Ans;
    }
};
