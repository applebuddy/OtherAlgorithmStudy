//
//  Dominator.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/03/04.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Dominator
// MARK: Hash C++ 문제풀이

#if 0
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map<int,int> key;
int solution(vector<int> &A) {
    int len = (int)A.size();
    for(int i=0; i<len; i++) {
        key[A[i]]++;
        if(key[A[i]]>len/2) {
            return i;
        }
    }
    return -1;
}
#endif
