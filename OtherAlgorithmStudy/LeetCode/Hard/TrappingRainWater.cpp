//
//  TrappingRainWater.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/12/11.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: TrappingRainWater

// MARK: - DP 활용, 통과 답안
#if 0
#include <vector>
#include <algorithm>
#include <cmath>
typedef pair<int,int> Pair;

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() <= 2) return 0;
        int maxHeight = 0, Ans = 0;
        vector<int> V(height.size(), 0);
        for(int i=0; i<height.size(); i++) {
            if(maxHeight > height[i]) V[i] = maxHeight - height[i];
            else maxHeight = height[i];
        }
        
        maxHeight = 0;
        for(int i=height.size()-1; i>=0; i--) {
            if(maxHeight > height[i]) Ans += min(V[i], maxHeight - height[i]);
            else maxHeight = height[i];
        }
        
        return Ans;
    }
};
#endif

// MARK: - Set -> Intersection 활용, 시간초과 답안
#if 0
#include <set>
#include <algorithm>
typedef pair<int,int> Pair;

class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() <= 2) return 0;
        int maxHeight = *max_element(height.begin(), height.end());
        set<Pair> lST;
        set<Pair> rST;
        
        for(int i=1; i<=maxHeight; i++) {
            bool flag = false;
            for(int j=0; j<height.size(); j++) {
                if(i <= height[j]) flag = true;
                else {
                    if(flag) lST.insert({i,j});
                }
            }
            
            flag = false;
            for(int j=height.size()-1; j>=0; j--) {
                if(i <= height[j]) flag = true;
                else {
                    if(flag) rST.insert({i,j});
                }
            }
        }
        
        vector<Pair> AnsST;
        set_intersection(lST.begin(), lST.end(), rST.begin(), rST.end(), back_inserter(AnsST));
        return AnsST.size();
    }
};
#endif
