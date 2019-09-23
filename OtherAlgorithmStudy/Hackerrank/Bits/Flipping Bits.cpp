//
//  FlipBits.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 비트부호 뒤집기 문제

// Complete the flippingBits function below.
// 2^32까지의 수 영역 비트를 뒤집은 값 출력하기

#include <cmath>

long flippingBits(long n) {
    // NOT(~) 연산자 적용
    // 1) ~n의 값이 -값이라는 것은 32비트의 맨 앞자리가 1이라는 것, 맨 앞은 부호로 취급하므로 추가로 2^32값을 더해준다.
    // 2) ~n의 값으 +값이라는 것은 32비트의 맨 앞자리가 0이라는 것으로 부호취급과 상관없이 그대로 ~n의 값을 출력하면 된다.
    return ~n<0 ? (long)pow(2,32)+~n:~n;
}

