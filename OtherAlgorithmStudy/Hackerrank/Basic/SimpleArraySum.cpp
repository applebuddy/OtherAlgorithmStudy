//
//  SimpleArraySum.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Simple Array Sum
//. * 배열의 요소를 전체 합산한 결과 출력 연습 

#include <iostream>
#include <vector>
using namespace std;

int simpleArraySum(vector<int> ar) {
   int sum = 0;
   for(int i=0; i<ar.size(); i++) sum += ar[i];
   return sum;
}
