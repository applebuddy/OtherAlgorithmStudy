//
//  SplitArrayIntoConsecutiveSubsequences.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/23.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: SplitArrayIntoConsecutiveSubsequences
// MARK: - unordered_map 사용 문제풀이
#if 0
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> UMP;
        for(auto &v: nums) UMP[v]++;
        for(int i=nums.size()-1; i>=0; i--) {
            if(UMP[nums[i]]==0) continue;
            int num = nums[i], j = 1;
            for(num; UMP[num]--<=UMP[num-1]; num--, j++);
            if(j<3) return false;
        }
        return true;
    }
};
#endif
