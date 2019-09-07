//
//  CountingValleys.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 04/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Counting Valleys
// MARK: 건너간 골짜기의 갯수를 구해라!!
// 골짜기는 초기 높이(0) 기준 아래로 이동 후 다시 초기 높이로 이동했을때 1번의 골짜기를 다녀온것으로 판단한다.
// n의 길이를 가진 골짜기를 이동하라!!
// - string의 문자는 위로 1칸 가는 'U', 아래로 1칸 가는 'D'로 이루어져있다. 
#include <iostream>
using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int h = 0;
    int ans = 0;
    for(int i=0; i<s.length(); i++) {
        if(s[i] == 'U') {
            h++;
            if(h==0) { ans++; }
        } else {
            h--;
        }
    }
    return ans;
}
