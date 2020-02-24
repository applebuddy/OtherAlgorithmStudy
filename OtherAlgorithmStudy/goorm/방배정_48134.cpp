//
//  방배정_48134.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 방배정 48135
// MARK: 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> V(7, vector<int>(2,0));
    int N, K; cin>>N>>K;
    int Ans = 0;
    for(int i=0; i<N; i++) {
        int gender, grade; cin>>gender>>grade;
        V[grade][gender]++;
    }
    
    for(int i=1; i<=6; i++) {
        Ans += V[i][0] != 0 ? (V[i][0] - 1) / K + 1 : 0;
        Ans += V[i][1] != 0 ? (V[i][1] - 1) / K + 1 : 0;
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
