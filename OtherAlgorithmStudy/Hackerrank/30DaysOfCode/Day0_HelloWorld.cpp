//
//  Day0_HelloWorld.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 17/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


// MARK: - DAY0 : HELLOWORLD
// MARK: 문자열 출력하기

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int printHelloWorld() {
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string inputString; // declare a variable to hold our input
    getline(cin, inputString); // get a line of input from cin and save it to our variable
    
    cout << "Hello, World." << endl;
    cout << inputString << endl;
    return 0;
}
