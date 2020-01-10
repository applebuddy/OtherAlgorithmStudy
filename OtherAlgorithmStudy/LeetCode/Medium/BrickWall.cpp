//
//  BrickWall.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Brick Wall 문제풀이

#if 0

#include <string>
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int,int> MP;
        int Ans=2e9;
        for(int i=0; i<wall.size(); i++) {
            int sum=0;
            for(int j=0; j<wall[i].size(); j++) {
                if(j == wall[i].size()-1) break;
                sum += wall[i][j];
                MP[sum]++;
            }
        }
        
        map<int,int>::iterator iter = MP.begin();
        for(iter; iter!=MP.end(); iter++) {
            int nowVal = wall.size() - iter->second;
            Ans = Ans > nowVal ? nowVal : Ans;
        }
        
        Ans = Ans > wall.size() ? wall.size() : Ans;
        return Ans;
    }
};
#endif
