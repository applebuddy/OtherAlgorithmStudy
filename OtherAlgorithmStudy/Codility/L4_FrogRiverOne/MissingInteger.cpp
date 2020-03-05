//
//  MissingInteger.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - MissingInteger
/// A의 요소를 제외 한 양수 중 가장 작은 양수값을 출력해라!

// MARK: map 미사용 O(N) or O(NlogN) 답안
// unordered_map 사용 버전에 비해 빠른 성능

#if 0
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    sort(A.begin(), A.end());
    // 만약 최댓값이 0보다 작거나 가장 작은 값이 1보다 크면 1을 반환한다.
    if(A.back() < 0 || (1 < A[0])) return 1;

    int target = 0;
    for(int i=0; i<(int)A.size(); i++) {
        if(A[i] < 0) continue;
        if(i>0 && A[i-1] == A[i]) continue;
        if(target+1 < A[i]) return target+1;
        else target=A[i];
    }
    return A.back()+1;
}
#endif

// MARK: map 사용 O(N) or O(NlogN) 답안
#if 0
#include <algorithm>
#include <unordered_map>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    unordered_map<int,int> mp;
    sort(A.begin(), A.end());
    int lastValue = A[A.size()-1];
    if(lastValue <= 0) return 1;
    
    for(auto v: A) mp[v]++;
    
    for(int i=1; i<=lastValue+1; i++) {
        if(i<=0) continue;
        if(mp[i]==0) return i;
    }
    return 0;
}
#endif
