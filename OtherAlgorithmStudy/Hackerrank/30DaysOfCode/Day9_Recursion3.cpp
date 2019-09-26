//
//  Day9_Recursion3.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day 9 : Recursion Problem 3
/// MARK: 팩토리얼 결과값을 재귀함수를 사용하여 출력하라!!

#include <stdio.h>

/// 재귀함수, factorial() 사용, 팩토리얼 연산 답안)
int factorial(int n) {
    if(n==1) return 1;
    return n * factorial(n-1);
}
