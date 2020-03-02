//
//  Fish.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Fish
// MARK: Stack C++ 문제풀이

#if 0
#include <stack>
#include <vector>
using namespace std;

int solution(vector<int> &A, vector<int> &B) {
    stack<pair<int,int>> STK;
    int Ans = 0;
    for(int i=0; i<(int)A.size(); i++) {
        if(B[i]==1) STK.push({i,A[i]});
        else {
            while(!STK.empty() && (int)STK.top().second < A[i]) {
                STK.pop();
            }
            if(STK.empty()) Ans++;
        }
    }
    
    return Ans + STK.size();
}
#endif
