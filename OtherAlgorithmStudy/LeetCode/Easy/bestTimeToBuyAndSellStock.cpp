//
//  bestTimeToBuyAndSellStock.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/11/26.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - bestTimeToBuyAndSellStock
// - 5.41% / 72.48%
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Ans = 0;
        for(int i=0; i<prices.size(); i++) {
            for(int j=i+1; j<prices.size(); j++) {
                int gap = prices[j]-prices[i];
                Ans = gap > Ans ? gap : Ans;
            }
        }
        return Ans;
    }
};
