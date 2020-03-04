//
//  EquiLeader.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - EquiLeader
// MARK: hash C++ 문제풀이

#if 0
#include <unordered_map>
#include <vector>
using namespace std;
typedef unordered_map<int,int> UM;

int solution(vector<int> &A) {
    UM UMP;
    int maxV = 0;
    int leader = 0;
    int leftCnt = 0;
    int Ans = 0;
    for(int i=0; i<(int)A.size(); i++) {
        UMP[A[i]]++;
        if(maxV < UMP[A[i]]) {
            maxV = UMP[A[i]];
            leader = A[i];
        }
    }
    
    for(int i=0; i<(int)A.size(); i++) {
        if(A[i] == leader) {
            leftCnt++;
            UMP[A[i]]--;
        }
        
        if(leftCnt>((i+1)/2) && UMP[leader]>(((int)A.size()-(i+1))/2)) {
            Ans++;
        }
    }
    
    return Ans;
}
#endif
