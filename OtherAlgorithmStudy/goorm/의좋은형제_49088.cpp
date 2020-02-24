//
//  의좋은형제_49088.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 의좋은형제 49088
// MARK: 문제풀이

#if 0
#include <iostream>
using namespace std;
int main() {
    int A,B,K; cin>>A>>B>>K;
    bool flag = true;
    for(int i=0; i<K; i++) {
            int amount = 0;
            if(flag) {
                    amount = (A-1)/2+1;
                    A -= amount;
                    B += amount;
            } else {
                    amount = (B-1)/2+1;
                    B -= amount;
                    A += amount;
            }
            flag = !flag;
    }
    
    printf("%d %d\n",A,B);
    return 0;
}
#endif
