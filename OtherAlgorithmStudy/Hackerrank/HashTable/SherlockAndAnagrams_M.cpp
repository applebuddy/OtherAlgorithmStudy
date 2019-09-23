//
//  SherlockAndAnagrams.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 24/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - SherlockAndAnagrams : Hash Table Problem
/// MARK: 입력받은 문자열, s에 대한 아나그램 경우의 수 찾기!

/// * unordered_map 사용, 통과 답안)
#include <vector>
#include <string>
#include <algorithm>
#include <unordered_map>
using namespace std;

int sherlockAndAnagrams(string s) {
    unordered_map<string, int> UMP;
    int Ans = 0;
    int length = int(s.length());
    for(int i=1; i<length; i++) {
        for(int j=0; j<=length-i; j++) {
            string temp = s.substr(j,i);
            sort(temp.begin(), temp.end());
            UMP[temp]++;
        }
    }
    
    for(auto mp : UMP) {
        Ans += mp.second * (mp.second-1) / 2;
    }
    
    printf("%d\n",Ans);
    return Ans;
}

//int main() {
//    int Ans = sherlockAndAnagrams("abba");
//    return 0;
//}
