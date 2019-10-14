//
//  RemoveDuplicatesFromSortedArray.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Remove Duplicates From Sorted Array

#if 0
#include <vector>
#include <set>
using namespace std;

class RemoveDuplicatesFromSortedArray {
public:
    
    /// MARK: - 서브 벡터 사용 통과답안, 93.43%
    int removeDuplicatesSemiMaster(vector<int>& nums) {
        vector<int> Ans;
        if(nums.size()==0) return 0;
        Ans.push_back(nums.front());
        for(unsigned int i=1; i<nums.size(); i++) {
            if(nums[i-1]!=nums[i]) Ans.push_back(nums[i]);
        }
        nums = Ans;
        return Ans.size();
    }
    
    /// MARK: - set 사용 통과답안, 25%
    int removeDuplicates(vector<int>& nums) {
        set<int> ST;
        for(auto v: nums) ST.insert(v);
        nums.clear();
        for(auto s: ST) nums.push_back(s);
        return nums.size();
    }
    
    /// MARK: erase 함수 사용 통과답안, 10%
    int removeDuplicates(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++) {
            if(nums[i-1]==nums[i]) {
                nums.erase(nums.begin()+i);
                i--;
            }
            
        }
        return (int)nums.size();
    }
};
#endif
