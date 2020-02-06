//
//  SplitArrayIntoConsecutiveSubsequences.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/23.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: SplitArrayIntoConsecutiveSubsequences

// MARK: - map 사용 좀더 이해쉽지만 좀더 긴 문제풀이

#if 0
#include <iostream>
#include <map>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        map<int,int> MP, CMP;
        for(auto &v: nums) MP[v]++;
        for(auto &v: nums) {
            if(MP[v]==0) continue;
            if(CMP[v]>0) {
                CMP[v]--;
                CMP[v+1]++;
                MP[v]--;
            } else if (CMP[v]==0) {
                int now = v, next = v+1, nnext = v+2;
                if(MP[now]==0 || MP[next]==0 || MP[nnext]==0) {
                    return false;
                }
                MP[now]--;
                MP[next]--;
                MP[nnext]--;
                CMP[nnext+1]++;
            }
        }
        
        return true;
    }
};
#endif

// MARK: - unordered_map 사용 문제풀이
#if 0
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        unordered_map<int,int> UMP;
        for(auto &v: nums) UMP[v]++;
        for(int i=nums.size()-1; i>=0; i--) {
            if(UMP[nums[i]]==0) continue;
            int num = nums[i], j = 1;
            for(num; UMP[num]--<=UMP[num-1]; num--, j++);
            if(j<3) return false;
        }
        return true;
    }
};
#endif
