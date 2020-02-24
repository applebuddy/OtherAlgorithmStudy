//
//  막대기_48193.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 막대기 48193
// MARK: 문제풀이

#if 0
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int N; cin>>N;
    vector<int> V(N,0);
    for(int i=0; i<N; i++) cin>>V[i];
    int target = 0, Ans = 0;
    for(int i=(int)V.size()-1; i>=0; i--) {
            if(target < V[i]) {
                    target = V[i];
                    Ans++;
            }
    }
    
    printf("%d\n",Ans);
    return 0;
}
#endif
