//
//  파손된램_49074.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 파손된램 49074
// MARK: 문제풀이

#if 0
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
typedef long long ll;
typedef unordered_map<ll,int> UM;

ll MAX = 2147483647;

int main() {
        ll val = 128;
        int N; cin>>N;
        vector<int> Ans;
        vector<int> arr(N,0);
        UM UMP;
    
        for(int i=0; i<N; i++) cin>>arr[i];
        while(val <= MAX) {
                UMP[val] = 1;
                val *= 2;
        }
    
        for(int i=0; i<arr.size(); i++) {
                if(UMP[arr[i]]!=1) Ans.push_back(i+1);
        }
    
        printf("%d\n",(int)Ans.size());
        for(auto &v: Ans) printf("%d ", v);
    
        return 0;
}
#endif
