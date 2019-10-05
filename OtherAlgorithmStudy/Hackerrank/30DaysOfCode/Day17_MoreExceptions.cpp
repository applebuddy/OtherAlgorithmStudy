//
//  Day17_MoreExceptions.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 04/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day17_MoreExceptions
//  * CalculatorWithException Practice

#include <iostream>
#include <cmath>
using namespace std;

class CalculatorWithException {
public:
    int power(int a, int b) {
        if(a<0 || b<0) throw runtime_error("n and p should be non-negative");
        else return pow(a,b);
    }
};
