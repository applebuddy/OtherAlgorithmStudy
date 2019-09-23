//
//  JumpingOnTheClouds.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 04/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - JumpingOnTheClouds
// MARK: 1,2 칸을 점프가능한 영희, 장애물을 피하고 갈 수 있는 최단 횟수를 구하라!
// ex) 0 1 0 0 0 1 0 => 0->2->4->6 3번의 점프만에 도착!
#include <iostream>
#include <vector>

using namespace std;

/// 통과 답안, while문 사용 Ver.
int jumpingOnCloudsWithWhileLoop(vector<int> c) {
    int Ans=0;
    int idx=0;
    
    while(idx < c.size()) {
        if(idx < c.size()-2 && c[idx+2]==0) {
            idx+=2;
            Ans++;
        } else {
            idx++;
            Ans++;
        }
        if(idx == c.size()-1) break;
    }
    return Ans;
}

/// 통과 답안, for문 사용 Ver.
int jumpingOnCloudsWithForLoop(vector<int> c) {
    int ans=0;
    for(int i=0; i<c.size(); i++) {
        if (i+2 < c.size() && c[i+2]!=1) {
            ans++;
            i++;
        } else if (c[i+1]!=1) {
            ans++;
        }
    }
    return ans;
}
