//
//  Arrays-DS.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Arrays-DS

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> reverseArray(vector<int> a) {
    reverse(a.begin(), a.end());
    return a;
}
