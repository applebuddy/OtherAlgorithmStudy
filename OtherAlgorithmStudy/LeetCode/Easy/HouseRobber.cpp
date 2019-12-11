//
//  HouseRobber.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/11/27.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: HouseRobber
// - 통과 답안 100% / 16.98%
#if 0
#include <vector>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        
        long long prev = 0;
        long long twoPrev = 0;
        if(nums.size()==0) return 0;
        vector<long long> DP(nums.size(),0);
        for(int i=0; i<nums.size(); i++) {
            DP[i] = max(twoPrev+nums[i], prev);
            twoPrev = prev;
            prev = DP[i];
        }
        
        // for(auto v: DP) printf("%d, ",v);
        // puts("");
        return DP.back();
    }
};
#endif


// MARK: - 시간초과 답안
#if 0
class Solution {
public:
    
    int Ans = 0;
    void DFS(int idx, int score, vector<int> &nums) {
        if(idx >= nums.size()) {
            Ans = Ans < score ? score : Ans;
            return;
        }
        
        DFS(idx+1,score,nums);
        score += nums[idx];
        DFS(idx+2,score,nums);
    }
    
    int rob(vector<int>& nums) {
        DFS(0,0,nums);
        
        return Ans;
    }
};
#endif
