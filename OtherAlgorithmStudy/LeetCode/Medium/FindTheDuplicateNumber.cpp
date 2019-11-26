//
//  FindTheDuplicateNumber.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/11/26.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


// MARK: - FindTheDuplicateNumber
// - 통과 답안, but 다른 방법 강구 필요

#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int> MP;
        int maxNum = 0;
        int Ans = 0;
        for(int i=0; i<nums.size(); i++) {
            MP[nums[i]]++;
            if(maxNum < MP[nums[i]]) {
                maxNum = MP[nums[i]];
                Ans = nums[i];
            }
        }
        return Ans;
    }
};
