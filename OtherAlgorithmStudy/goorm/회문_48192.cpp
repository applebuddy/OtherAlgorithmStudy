//
//  회문_48192.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 회문_48192
// MARK: TwoPointer 활용 문제풀이

#if 0
#include <iostream>
#include <string>
using namespace std;

int main() {
    int T; cin>>T;
    while(T--) {
        int diff = 0;
        string S; cin>>S;
        int len = S.length();
        int left = 0, right = len-1;
        int Ans = 0;
        while(left < right) {
            if(S[left] != S[right]) {
                diff++;
                right--;
            } else {
                left++; right--;
            }
            if(diff > 1) break;
        }
        Ans = diff;
        left = 0, right = len-1;
        if(Ans == 0) printf("%d\n",Ans);
        else {
            diff = 0;
            while(left < right) {
                if(S[left] != S[right]) {
                    diff++;
                    left++;
                } else {
                    left++; right--;
                }
                if(diff > 1) break;
            }
            Ans = Ans > diff ? diff : Ans;
            printf("%d\n", Ans==1 ? 1 : 2);
        }
    }
    return 0;
}
#endif
