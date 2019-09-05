//
//  Strings: Making Anagrams.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Strings: Making Anagrams
// MARK: string a,b의 최소한의 알파벳을 제거하여 아나그램을 만들어라!!!

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

char cArr[26] = {0,};
int makeAnagram(string a, string b) {
    int ans = 0;
    for(auto c : a) ++cArr[c-'a'];
    for(auto c : b) --cArr[c-'a'];
    for(auto c : cArr) ans+=abs(c);
    return ans;
}
