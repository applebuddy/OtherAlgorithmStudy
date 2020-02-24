//
//  진법변환_49062.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/24.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 진법변환 49062
// MARK: 진법 문제풀이

#if 0
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
typedef unordered_map<char,int> UM;
typedef unordered_map<int,char> UM2;

UM UMP = {{'A',10}, {'B',11}, {'C',12}, {'D',13}, {'E',14}, {'F',15}};
UM2 UMP2 = {{10,'A'}, {11,'B'}, {12,'C'}, {13,'D'}, {14,'E'}, {15,'F'}};

bool isRight(int N, const int &K, const string &R) {
        string comp = "";
        while(N>0) {
                if(N%K<10) comp = to_string(N%K) + comp;
                else comp = UMP2[N%K] + comp;
                N /= K;
        }
        return comp == R;
}

int main() {
        string N,R; cin>>N>>R;
        int Max = 2;
        for(int i=0; i<(int)R.length(); i++) {
                if(R[i] > '0' && R[i] <= '9') Max = Max < (R[i]-'0')+1 ? (R[i]-'0')+1 : Max;
                else Max = Max < UMP[R[i]]+1 ? UMP[R[i]]+1 : Max;
        }
    
        for(int i=2; i<=16; i++) {
                if(isRight(stoi(N), i, R)) return !printf("%d\n",i);
        }
        return 0;
}
#endif
