//
//  SmartNumber.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 17/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - SmartNumber
/// MARK: 짝수개의 약수를 갖는 숫자인지 구별하는 함수를 작성하라!
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(num == val*val)
        return true;
    return false;
}

int checkSmartNumber() {
    
    int test_cases;
    cin >> test_cases;
    int num;
    for(int i = 0; i < test_cases; i++) {
        cin >> num;
        bool ans = is_smart_number(num);
        if(ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
