//
//  luck Balance.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - luck Balance
// MARK: 중요도(contests[i][1])가 1일 경우 k를 하나 감소시키고 contests[i][0] 점수를 더할 수 있다. k가 부족해지면 contests[i][0]만큼 점수를 감소해야 한다.
// * contests[i][1]이 0이면 contests[i][0]는 그냥 더해주면 된다. 이런 조건 하에서 받을 수 있는 가장 높은점수를 반환하라!

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Complete the luckBalance function below.
int luckBalance(int k, vector<vector<int>> contests) {
    int Ans = 0;
    
    sort(contests.begin(), contests.end(),
         [](vector<int> con1, vector<int> con2) {
             return con1[0] > con2[0];
         });
    
    
    vector<vector<int>>::iterator iter;
    for(iter=contests.begin(); iter!=contests.end(); iter++) {
        if((*iter)[1]==1) {
            if(k>0) {
                Ans += (*iter)[0];
                k--;
            } else {
                Ans -= (*iter)[0];
            }
        } else {
            Ans += (*iter)[0];
        }
    }
    return Ans;
}
