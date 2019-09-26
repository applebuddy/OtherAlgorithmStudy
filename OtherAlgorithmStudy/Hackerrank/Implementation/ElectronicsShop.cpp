//
//  ElectronicsShop.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    sort(keyboards.begin(), keyboards.end());
    sort(drives.begin(), drives.end());
    int Ans = 0;
    for(int i=0; i<keyboards.size(); i++) {
        for(int j=0; j<drives.size(); j++) {
            if(keyboards[i]+drives[j]<=b) Ans = max(Ans, keyboards[i]+drives[j]);
            else break;
        }
    }
    return (Ans==0) ? -1 : Ans;
}
