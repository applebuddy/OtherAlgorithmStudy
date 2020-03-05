//
//  MaxCounters.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


/// MARK: - MaxCounters
/// MARK: A[K] == N+1 ? -> 현재 배열의 최댓값으로 모든 답안 요소를 초기화
/// * 그 이외의 값은 N번째의 요소를 ++ 시킨다.

// MARK: - C++ 복습 문제풀이
#if 0
#include <vector>
using namespace std;

vector<int> solution(int N, vector<int> &A) {
    vector<int> Ans(N, 0);
    int maxV = 0;
    int tempMax = 0;
    for(int i=0; i<(int)A.size(); i++) {
        if(A[i]==N+1) maxV = tempMax;
        else {
            if(Ans[A[i]-1] < maxV) Ans[A[i]-1] = maxV;
            Ans[A[i]-1]++;
            tempMax = tempMax < Ans[A[i]-1] ? Ans[A[i]-1] : tempMax;
        }
    }
    
    for(int i=0; i<(int)Ans.size(); i++) Ans[i] = Ans[i] < maxV ? maxV : Ans[i];
    return Ans;
}
#endif

/// MARK: - 정확성, 효율정 100% 통과 답안 with Mark-Up
/// * Key Point : 최댓값 갱신 횟수를 최소화 한다..
#if 0
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

vector<int> maxCounters(int N, vector<int> &A) {
    vector<int> Ans(N,0);
    /// 최댓값을 저장할 변수
    int maxCount = 0;
    
    /// 최댓값 갱신 이후의 임시적 최댓값 저장 변수
    int tempMax = 0;
    for(auto v : A) {
        // maxCount, N+1에 도달 시 maxCount를 tempMax값으로 갱신한다.
        if(v == N+1) maxCount = tempMax;
        else {
            /// 만약 특정 인덱스 값이 증감을 해야할 때, 최댓값 갱신이 되었는지 확인 후 ++ 시킨다.
            if(Ans[v-1] < maxCount) Ans[v-1] = maxCount;
            Ans[v-1]++;
            /// 증가시킨 값이 최댓값인지 체크하고 최댓값일 경우 tempMax에 갱신시킨다. maxCount값이 추후 나오면 maxCount에 해당 값을 갱신한다.
            tempMax = fmax(tempMax, Ans[v-1]);
        }
    }
    
    /// 만약 값들 중 maxCount 값보다 작으면 maxCount값으로 갱신한다.
    /// * 모든 Ans 벡터요소의 최솟값을 maxCount 값이어야 하기 때문이다.
    for(int i=0; i<int(Ans.size()); i++) {
        if(Ans[i] < maxCount) Ans[i] = maxCount;
    }
    
    return Ans;
}
#endif

/////// MARK: 정확성 100%, 효율성 60% 답안.
/////// -> 최댓값 연산 효율이 필요
//#include <algorithm>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//vector<int> maxCounters(int N, vector<int> &A) {
//    int maxCounter = N+1;
//    int max = 0;
//    vector<int> Ans(N,0);
//    for(auto v: A) {
//        if(v==maxCounter) Ans.assign(N,max);
//        else {
//            Ans[v-1]++;
//            max = fmax(Ans[v-1],max);
//        }
//    }
//    return Ans;
//}
