//
//  Wiggle-Subsequence.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Wiggle-Subsequence
// MARK: - DP, Time-Complexity O(N), Space-Complexity O(1) 문제풀이

#if 0
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        int up = 1, down = 1;
        for(int i=1; i<nums.size(); i++) {
            if(nums[i] > nums[i-1]) {
                up = down+1;
            } else if(nums[i] < nums[i-1]) {
                down = up+1;
            }
        }
        return max(up, down);
    }
};
#endif
