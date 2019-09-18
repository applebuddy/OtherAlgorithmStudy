//
//  MissingInteger.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - MissingInteger
/// A의 요소를 제외 한 양수 중 가장 작은 양수값을 출력해라!

/// * O(N) or O(NlogN) 답안
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
