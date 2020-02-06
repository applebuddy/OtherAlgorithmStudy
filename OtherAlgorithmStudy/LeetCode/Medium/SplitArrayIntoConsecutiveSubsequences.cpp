//
//  SplitArrayIntoConsecutiveSubsequences.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/23.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: SplitArrayIntoConsecutiveSubsequences

// MARK: - map 사용 좀더 이해쉽지만 좀더 긴 문제풀이 + 주석추가

#if 0
#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPossible(vector<int>& nums) {
        // * MP: 배열 요소들의 빈도수를 기록할 맵 자료구조
        // * CMP: 3연속 시퀀스 이후 있을 수 있는 값을 키로 기록하는 맵 자료구조
        // ex) 1,2,3 세번 연속이 있을경우, 4에 대해 CMP 키값으로 기록
        map<int,int> MP, CMP;
        
        // 배열 요소 빈도수를 MP에 기록
        for(auto &v: nums) MP[v]++;
        
        // 배열을 순회하며 모든 요소가 최소 3회이상의 연속값으로 이루어져있는지 확인한다.
        for(auto &v: nums) {
            // 해당 위치 값이 연속값으로 사용되었으면 건너뛴다
            if(MP[v]==0) continue;
            
            // 해당 위치값이 앞선 3회연속 시퀀스 이후의 값이면 현 위치값+1을 CMP로 재 기록하고
            // 현재 위치 값은 1 감소 시킨다.
            if(CMP[v]>0) {
                CMP[v]--;
                CMP[v+1]++;
                MP[v]--;
                
                // CMP[v]==0 이라는것은 아직 해당 값이 최소3회의 연속값에 포함되지 않았음을 의미
                // 현재 값에서 최소 3번의 연속값은 존재해야하므로 이를 체크한다.
                // * CMP의 값은 이미 3연속 시퀀스를 충족한 값들이 들어간다.
            } else if (CMP[v]==0) {
                int now = v, next = v+1, nnext = v+2;
                // 만약 3연속의 시퀀스값이 존재하지 않으면 false를 반환한다.
                if(MP[now]==0 || MP[next]==0 || MP[nnext]==0) {
                    return false;
                }
                
                // 3연속 시퀀스 값이 존재하면 3연속 시퀀스 값을 MP에서 1씩 감소시키고, 3연속 시퀀스 + 1의 값을 CMP에 기록한다.
                MP[now]--;
                MP[next]--;
                MP[nnext]--;
                CMP[nnext+1]++;
            }
        }
        
        // nums 순회를 마치게 된것은 최소 3연속 시퀀스가 성립했음을 의미하므로 true를 반환한다.
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
