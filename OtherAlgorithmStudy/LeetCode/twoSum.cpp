//
//  twoSum.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Two Sum

#if 0
#include <vector>
using namespace std;

class theTwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> Ans;
        for(int i=0; i<nums.size()-1; i++) {
            // 비교할 첫번째 값 인덱스
            for(int j=i+1; j<nums.size(); j++) {
                // 비교할 두번째 값 인덱스
                if(nums[i] + nums[j] == target) {
                    // 순회 중 비교한 두개의 값 합이 타겟과 일치할 경우 답 제출 후 종료
                    Ans = {i,j};
                    break;
                }
            }
        }
        return Ans;
    }
};
#endif
