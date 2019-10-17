//
//  SubSets.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <vector>
#include <algorithm>
using namespace std;

class SubSets {
public:
    void go(int count, vector<int> C, vector<int> nums, vector<vector<int>> &ANS) {
        if(count==C.size()) {
            vector<int> Ans;
            for(int i=0; i<C.size(); i++) {
                if(C[i]==1) Ans.push_back(nums[i]);
            }
            ANS.push_back(Ans);
            return;
        }
        
        C[count]=0;
        go(count+1,C,nums,ANS);
        C[count]=1;
        go(count+1,C,nums,ANS);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Ans;
        vector<int> C(nums.size(),0);
        go(0,C,nums,Ans);
        return Ans;
    }
};
