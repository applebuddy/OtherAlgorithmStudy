//
//  SummaryRanges.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class SummaryRanges {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size()==0) return vector<string>();
        long long posValue = nums.front();
        vector<string> Ans;
        for(int i=0; i<nums.size(); i++) {
            if(i==nums.size()-1) {
                if(posValue==nums.back()) Ans.push_back(to_string(posValue));
                else Ans.push_back(to_string(posValue) + "->" + to_string(nums[i]));
                break;
            }
            long long dif = (long long)nums[i+1]-(long long)nums[i];
            if(dif!=1) {
                if(posValue==nums[i]) Ans.push_back(to_string(posValue));
                else Ans.push_back(to_string(posValue) + "->" + to_string(nums[i]));
                posValue = nums[i+1];
            }
        }
        return Ans;
    }
};
#endif
