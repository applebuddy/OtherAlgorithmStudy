//
//  4Sum.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 17/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 4SUM
#if 0
#include <vector>
#include <set>
using namespace std;

/// MARK: - 4중포문 통과답안, 5.02%, 더 좋은 방법을 찾아봐야 함
class theFourSum {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size()<4) return {};
        set<vector<int>> ST;
        
        sort(nums.begin(), nums.end());
        vector<vector<int>> Ans;
        // 4중 for문을 사용하여 전체 경우의 수에 따른 타겟 합을 구할 수 있다. 
        for(int i=0; i<nums.size()-3; i++) {
            for(int j=i+1; j<nums.size()-2; j++) {
                for(int k=j+1; k<nums.size()-1; k++) {
                    for(int l=k+1; l<nums.size(); l++) {
                        if(nums[i]+nums[j]+nums[k]+nums[l]==target) {
                            vector<int> temp;
                            temp = {nums[i], nums[j], nums[k], nums[l]};
                            ST.insert(temp);
                        }
                    }
                }
            }
        }
        for(auto s: ST) Ans.push_back(s);
        return Ans;
    }
};
#endif
