//
//  뱀이지나간자리_51353.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 뱀이 지나간 자리 51363
// MARK: IO 문제풀이

#if 0
#include <iostream>
#include <string>
using namespace std;
int main() {
        int N,M; cin>>N>>M;
        string lStr = '#' + string(M-1,'.');
        string rStr = string(M-1,'.') + '#';
        string fStr = string(M,'#');
        for(int i=0; i<N; i++) {
                if(i & 1) {
                        if(i % 4 == 1) printf("%s\n",rStr.c_str());
                        else printf("%s\n",lStr.c_str());
                } else printf("%s\n",fStr.c_str());
        }
        return 0;
}
#endif
