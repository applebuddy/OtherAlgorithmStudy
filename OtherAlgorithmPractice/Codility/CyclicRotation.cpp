//
//  Array Rotation.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 11/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Array Rotation (100)
// K번 우측 배열 회전 결과를 출력하라!
#include <vector>
using namespace std;

vector<int> solution(vector<int> &A, int K) {
    if(A.size() <= 1) return A;
    vector<int> Ans;
    int rot = K % A.size();
    for(int i=int(A.size()-rot); i<A.size(); i++) Ans.push_back(A[i]);
    for(int i=0; i<A.size()-rot; i++) Ans.push_back(A[i]);
    return Ans;
}
