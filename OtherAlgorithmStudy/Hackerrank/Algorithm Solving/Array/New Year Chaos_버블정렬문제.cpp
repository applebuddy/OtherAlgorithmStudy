//
//  NewYearChaos.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - NewYearChaos
// MARK: 각각의 배열 요소는 뇌물을 2개씩 가지고 있어 2번씩 자리를 상태방과 한칸 교체할 권한이 있다.
// - 만약 자리교환으로 오름차순 정렬이 불가능하다면 "Too Chaotic" 출력, 가능하다면 총 몇번 변경해야하는지 출력하라!!
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void minimumBribes(vector<int> q) {
    int ans=0;
    for(int i=int(q.size()-1); i>=0; i--) {
        if(q[i]-(i+1) > 2) { printf("Too chaotic\n"); return;}
        for(int j=max(0,q[i]-2); j<i; j++) {
            if(q[j] > q[i]) ans++;
        }
    }
    printf("%d\n",ans);
    return;
}
