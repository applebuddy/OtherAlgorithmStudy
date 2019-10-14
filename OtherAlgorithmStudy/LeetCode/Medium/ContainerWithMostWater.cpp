//
//  ContainerWithMostWater.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Container With Most Water : Range Calculation Algorithm Problem
#include <vector>
#include <iostream>
using namespace std;

/// MARK: - 좌우 비교 알고리즘 활용 통과답안, 65.27% / 71.13%
class ContainerWithMostWater {
public:
    int maxArea(vector<int>& height) {
        int Ans = 0;
        int left = 0;
        int right = (int)height.size()-1;
        while(left<right) {
            int dim = (right-left) * (height[left] > height[right] ? height[right] : height[left]);
            Ans = Ans < dim ? dim : Ans;
            if(height[left] < height[right]) left++;
            else right--;
        }
        return Ans;
    }
};
