//
//  NumberOfDiscIntersections.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 15/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - NumberOfDiscIntersections

// MARK: A 배열 인덱스 기준 A[i]만큼의 반지름 원이 그려진다.

// => 서로 교집합이 생기는 원의 짝 갯수를 출력해라!!

#include <vector>

using namespace std;

vector<long long> sArr(100001,0);
vector<long long> eArr(100001,0);

int numberOfDisIntersections(vector<int> &A) {
    long long Ans = 0;
    for(int i=0; i<int(A.size()); i++) {
        int start = (i-A[i] > 0) ? i-A[i] : 0;
        int end = (i+A[i] > int(A.size()-1)) ? int(A.size()-1) : i+A[i];
        sArr[start]++;
        eArr[end]++;
    }
    
    int dup=0;
    for(int i=0; i<int(A.size()); i++) {
        if(sArr[i]>0) {
            Ans += dup * sArr[i];
            Ans += sArr[i] * (sArr[i]-1) / 2;
            if(Ans > 10000000) return -1;
            dup += sArr[i];
        }
        dup -= eArr[i];
    }
    return int(Ans);
}
