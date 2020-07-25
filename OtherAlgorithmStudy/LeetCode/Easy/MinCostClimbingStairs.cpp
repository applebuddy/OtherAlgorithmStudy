//
//  MinCostClimbingStairs.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/11/26.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Min Cost Climbing Stairs
#if 0
#include <vector>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int f1 = 0, f2 = 0;
        for(int i=cost.size()-1; i>=0; i--) {
            int f0 = cost[i] + min(f1, f2);
            f2 = f1;
            f1 = f0;
        }
        return min(f1,f2);
    }
};
#endif
