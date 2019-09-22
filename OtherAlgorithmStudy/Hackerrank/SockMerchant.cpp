//
//  SockMerchant.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 22/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Sock Merchant

// MARK: 총 몇개의 쌍이 있는지 확인하라(같은 숫자 페어의 갯수 반환)

// ex) 1,1,2,3,4,5,5,5,6,6 -> 1,5,6이 각각 1쌍 씩 있으므로, 답은 3
// Complete the sockMerchant function below.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int sockMerchant(int n, vector<int> ar) {
    int Ans=0;
    sort(ar.begin(), ar.end());
    
    for(int i=0; i<ar.size()-1; i++) {
        if(ar[i]==ar[i+1]) {
            Ans++;
            i++;
        }
    }
    return Ans;
}
