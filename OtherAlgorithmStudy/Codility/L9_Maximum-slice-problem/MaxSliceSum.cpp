//
//  MaxSliceSum.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - MaxSliceSum
// MARK: C++ 문제풀이ㅣ

#if 0
#include <vector>
using namespace std;
typedef long long ll;

int solution(vector<int> &A) {
    ll sum = 0;
    ll Ans = -2e10;
    for(int i=0; i<(int)A.size(); i++) {
        sum += A[i];
        Ans = Ans < sum ? sum : Ans;
        if(sum < 0) sum = 0;
    }
    return Ans;
}
#endif
