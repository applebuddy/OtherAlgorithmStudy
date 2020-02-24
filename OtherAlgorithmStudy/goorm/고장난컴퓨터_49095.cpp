//
//  고장난컴퓨터_49095.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 고장난컴퓨터 49095
// MARK: 문제풀이
#if 0
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N,C; cin>>N>>C;
    int Ans = 1;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    for(int i=1; i<(int)V.size(); i++) {
            if(V[i]-V[i-1] <= C) Ans++;
            else Ans = 1;
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
