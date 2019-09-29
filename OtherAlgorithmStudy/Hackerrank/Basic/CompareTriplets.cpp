//
//  CompareTriplets.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Compare The Riplets

#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> Ans(2,0);
    for(int i=0; i<a.size(); i++) {
        if(a[i] > b[i]) Ans[0]++;
        else if(a[i] < b[i]) Ans[1]++;
    }
    return Ans;
}
