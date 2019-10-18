//
//  SubSets.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - SubSets
//  - 재귀적 용법 활용 부분집합 출력 문제 통과답안
#include <vector>
#include <algorithm>
using namespace std;

class SubSets {
public:
    void go(int count, vector<int> C, vector<int> nums, vector<vector<int>> &ANS) {
        // 부분집합 가능 요소를 모드 훑었을 때마다 부분집합의 경우의 수를 출력하고 해당 재귀함수를 순차적으로 종료한다.
        if(count==C.size()) {
            vector<int> Ans;
            for(int i=0; i<C.size(); i++) {
                if(C[i]==1) Ans.push_back(nums[i]);
            }
            ANS.push_back(Ans);
            return;
        }
        
        C[count]=0;
        // 부분집합에서 해당 인덱스 요소를 사용 안할 경우,
        go(count+1,C,nums,ANS);
        C[count]=1;
        // 부분집합에서 해당 인덱스 요소를 사용 할 경우를 분리하여 경우의 수를 출력한다.
        go(count+1,C,nums,ANS);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Ans;
        vector<int> C(nums.size(),0);
        go(0,C,nums,Ans);
        return Ans;
    }
};
