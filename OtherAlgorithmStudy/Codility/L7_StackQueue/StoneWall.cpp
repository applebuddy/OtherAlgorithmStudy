//
//  StoneWall.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/03.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - StoneWall
// MARK: Stack C++ 문제풀이
/// * 각 위치 블록의 높이가 주어졌을때 해당 블럭들의 영역을 만들 수 있는 최소 직사각형 블럭 갯수를 구하는 문제
/// 1) Stack top에 큰 값이 존재하면 pop,
/// 2) 1번 조건으로 pop을 반복 후 top에 동일한 값이 나오면 continue,
/// 3) 1번 조건으로 pop을 반복 후 stack이 비거나 현재 H[i]값과 다르면 push 후 count 증가

#if 0
#include <vector>
#include <stack>
using namespace std;

int solution(vector<int> &H) {
    int Ans = 0;
    stack<int> STK;
    
    for(int i=0; i<(int)H.size(); i++) {
        while(!STK.empty() && STK.top() > H[i]) {
            STK.pop();
        }
        if(!STK.empty() && STK.top() == H[i]) continue;
        Ans++;
        STK.push(H[i]);
    }
    return Ans;
}
#endif
