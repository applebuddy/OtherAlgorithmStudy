//
//  TheHurdleRace.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - TheHurdleRace
//  * 허들레이스를 하는 선수의 기본 점프가능 높이, k가 있다. 그는 약을 빨면 1씩 점프가능 높이가 높아진다. 레이스의 허들높이가 정의된 height 배열이 있을때 선수는 몇번 약을 빨아야 이 허들을 전부 넘을 수 있을까?

#include <iostream>
#include <vector>

using namespace std;

int hurdleRace(int k, vector<int> height) {
    int MAX = *max_element(height.begin(),height.end());
    return MAX <= k ? 0 : MAX-k;
}
