//
//  SearchInsertPosition.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - SearchInsertPosition

#include <vector>
using namespace std;

class SearchInsertPosition {
public:
    
    /// MARK: - 통과 답안, 98.22%
    int searchInsertMaster(vector<int>& nums, int target) {
        int Ans=0;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]==target) return i;
            else {
                if(nums[i] < target) Ans=i+1;
                else break;
            }
        }
        return Ans;
    }
};
