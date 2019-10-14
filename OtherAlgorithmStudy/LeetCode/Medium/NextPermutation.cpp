//
//  NextPermutation.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Next Permutation : Mathematics Algorithm Problem

#include <vector>
#include <algorithm>
using namespace std;

/// MARK: next_permutation() 사용 통과 답안, 98.75% / 81.72%
class NextPermutation {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(), nums.end());
    }
};
