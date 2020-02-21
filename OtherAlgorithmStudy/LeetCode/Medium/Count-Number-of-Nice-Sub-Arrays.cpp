//
//  Count-Number-of-Nice-Sub-Arrays.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/20.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Count-Number-of-Nice-Sub-Arrays

// MARK: 복습 풀이
#if 0
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> cnt(nums.size()+1, 0);
        cnt[0] = 1;
        int idx = 0, Ans = 0;
        for(auto &v: nums) {
            idx += (v & 1);
            cnt[idx]++;
            if(k<=idx) Ans += cnt[idx-k];
        }
        return Ans;
    }
};
#endif

// MARK: TP 문제풀이 (복습 필요)
#if 0
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        vector<int> PV(nums.size()+1); // K개의 홀수가 성립 시 몇번의 카운트 중첩이 되는지를 기록하는 배열
        PV[0]=1; // 초기 count는 1
        int idx=0; // 타겟 인덱스
        int Ans=0;
        for(auto &v: nums){
            if(v%2==1) idx++; // 홀수 일경우 인덱스 증가,
            PV[idx]++; // K 매칭 시 카운팅될 수 있는 값 누적
            if(idx>=k) {
                Ans += PV[idx-k]; // 현재 홀수카운트 - k일때의 경우의 수를 누적, 이후 짝수가 나오면 계속 누적
            }
        }
        return Ans;
    }
};
#endif
