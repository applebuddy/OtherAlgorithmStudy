//
//  RemoveElement.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Remove Element : Array Allgorithm Problem
#include <vector>
#include <algorithm>
using namespace std;

class RemoveElement {
public:
    
    /// MARK: - 단순 반복분, 서브 벡터 활용 답안, 100%
    int removeElementMaster(vector<int>& nums, int val) {
            vector<int> Ans;
            for(int i=0; i<nums.size(); i++) if(nums[i]!=val) Ans.push_back(nums[i]);
            nums = Ans;
            return (int)nums.size();
        }
    
    /// MARK: 단순 반복문 사용 통과답안 70%
    int removeElement2(vector<int>& nums, int val) {
        for(int i=0; i<nums.size();) {
            if(nums[i]==val) nums.erase(nums.begin()+i);
            else i++;
        }
        return (int)nums.size();
    }
    
    /// MARK: find 함수 사용 통과답안 75%
    int removeElement(vector<int>& nums, int val) {
        auto pos = nums.begin();
        while(1) {
            auto cur = find(pos, nums.end(), val);
            if(cur != nums.end()) {
                auto dir = cur - nums.begin();
                nums.erase(pos+dir);
            } else break;
        }
        return (int)nums.size();
    }
};
