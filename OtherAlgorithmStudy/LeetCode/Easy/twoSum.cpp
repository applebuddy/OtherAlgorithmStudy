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
#include <map>
#include <unordered_map>
using namespace std;

class theTwoSum {
public:
    
    /// MARK: - unordered_map 사용 통과답안, 64.24% ~ 92.65%
    //  * map 사용 시 48%
    vector<int> twoSum2(vector<int>& nums, int target) {
        unordered_map<int,int> MP;
        // map에 배열 키(배열값), 값(배열값 인덱스)를 저장
        for(int i=0; i<nums.size(); i++) MP[nums[i]]=i;
        for(int i=0; i<nums.size(); i++) {
            // 동일한 인덱스 값이 아닌 짝 값(target - 배열값)이 존재하는지 map을 검색, 있다면 두개의 인덱스를 반환
            if(MP[target-nums[i]] > 0 && MP[target-nums[i]] != i) {
                return {i, MP[target-nums[i]]};
            }
        }
        return {0,0};
    }
    
    /// MARK: - 이중 for문 사용 통과답안, 18.24%
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
