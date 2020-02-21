//
//  시간복잡도_49098.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/21.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 시간복잡도 49098
// MARK: 문제풀이 (일부 TC TLE 답안)

#if 0
#include <iostream>
using namespace std;
typedef pair<int,int> Pair;

int main() {
    int N; cin>>N;
    pair<int,int> cnt = {0,0};
    for(int i=2; i<=N; i++) {
        int num = i;
            while(num%2==0) {
                num/=2;
                cnt.first++;
            }
            while(num%5==0) {
                num/=5;
                cnt.second++;
            }
    }

    printf("%d\n", cnt.first < cnt.second ? cnt.first : cnt.second);
    return 0;
}
#endif
