//
//  CountTriplets.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 24/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

long long countTriplets(vector<long> arr, long r) {
    unordered_map<long,long> UMP;
    long long Ans = 0;
    for(auto v : arr) UMP[v]++;
    if(r==1) {
        for(auto mp : UMP) {
            if((mp.second-1)>0 && (mp.second-2)>0) {
                Ans += (mp.second * (mp.second-1) * (mp.second-2) / 6);
            }
        }
        return Ans;
    }

    for(auto mp : UMP) {
        if(UMP[mp.first*r]==0 || UMP[mp.first*pow(r,2)]==0) continue;
        Ans += (mp.second * UMP[mp.first*r] * UMP[mp.first*r*r]);
    }
    return Ans;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    
    long long n,r;
    cin >> n >> r;
    vector<long> arr(n,0);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    long long Ans = countTriplets(arr,r);
    printf("%lld\n",Ans);
    return 0;
}
