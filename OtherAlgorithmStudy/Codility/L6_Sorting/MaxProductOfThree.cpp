//
//  MaxProductOfThree.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 15/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;

int maxProductOfThree(vector<int> &A) {
    sort(A.begin(),A.end());
    return max(A[0]*A[1]*A[A.size()-1], A[A.size()-3]*A[A.size()-2]*A[A.size()-1]);
}
