//
//  countingBits.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/11/26.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - countingBits
// - 통과답안, 7.44% 속도
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solutiwon {
public:
    int countOne(int num) {
        int count = 0;
        while(num>0) {
            if(num%2 == 1) count++;
            num/=2;
        }
        return count;
    }
    vector<int> countBits(int num) {
        vector<int> Ans;
        for(int i=0; i<=num; i++) {
            Ans.push_back(countOne(i));
        }
        return Ans;
    }
};
