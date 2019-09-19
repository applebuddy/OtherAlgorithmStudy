//
//  Day2_Operators.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 19/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day2_Operators
/// 반올림 연산 예제)

#include <stdio.h>
#include <cmath>

void operators(double meal_cost, int tip_percent, int tax_percent) {
    int Ans = 0;
    double tip = (double)tip_percent/100*meal_cost;
    double tax = (double)tax_percent/100*meal_cost;
    Ans = round(meal_cost + tip + tax);
    printf("%d",Ans);
}
