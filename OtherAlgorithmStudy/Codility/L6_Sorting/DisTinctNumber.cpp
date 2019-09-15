//
//  DisTinctNumber.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 15/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Distinct Number : Set Problem
// MARK: 배열내에 존재하는 구별된 숫자의 종류를 구하라!!
// ex) [1,2,3,3,3,4,4,5,5,5,5,5,5] => [1,2,3,4,5] 다섯개의 숫자가 존재한다.

#include <set>
#include <vector>
using namespace std;

int distinctNumber(vector<int> &A) {
    set<int> st;
    for(auto v: A) {
        st.insert(v);
    }
    return int(st.size());
}
