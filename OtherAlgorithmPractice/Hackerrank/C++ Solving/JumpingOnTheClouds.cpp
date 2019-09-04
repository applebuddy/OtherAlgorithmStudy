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

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(vector<int> c) {
    int ans=0;
    for(int i=0; i<c.size(); i++) {
        if (c.size()<=(i+1)) { break; }
        if (c.size()<=(i+2)) { ans++; break; }
        if (c[i+2]!=1) {
            ans++;
            i++;
            continue;
        }
        if (c[i+1]!=1) {
            ans++;
            continue;
        }
    }
    return ans;
}
