//
//  FirstMissingPositive.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - First Missing Postiive : Hard Level Array algorithm Problem
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class FirstMissingPositive {
public:
    /// MARK: vector, sort() 사용 통과답안, 63.96% / 76%
    int firstMissingPositive(vector<int>& nums) {
        // 비교 전 오름차순 정렬
        sort(nums.begin(), nums.end());
        // 배열요소가 없거나, 가장 큰 수가 음수라면 가장 작은 Positive Number인 1을 출력한다.
        if(nums.size()==0 || nums.back()<0) return 1;
        // 양수값 비교에 사용하는 cur 변수
        int cur=0;
        for(int i=0; i<(int)nums.size(); i++) {
            // 음수인 값을 스킵하고 양수값부터 순회한다.
            if(nums[i]<0) continue;
            
            // 현재까지 발견한 정수값+1 보다 현재 순회하는 값이 크면, 그 사이의 공백이 생겼으므로, 공백 값 중 최솟값인 cur+1을 답으로 반환하고 종료
            if(cur+1 < nums[i]) return cur+1;
            else cur = nums[i];
        }
        
        // 만약 전부 순회했는데 답이 안나온 경우 배열 사이 공백값이 없는 것이므로 최댓값+1을 정답으로 제출
        return nums.back()+1;
    }
};
