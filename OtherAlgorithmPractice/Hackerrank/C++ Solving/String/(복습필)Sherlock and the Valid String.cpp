//
//  Sherlock and the Valid String.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <map>

using namespace std;

array<int, 26> arr = {0,};
map<int,int> m;

string isValid(string s) {

    int max = 0;
    
    for(auto v : s ) {
        arr[v-'a']++;
        max = fmax(max,v-'a');
    }
 
    for(int i=0; i<=max; i++) {
        if(arr[i] != 0) m[arr[i]]++;
    }

    vector<pair<int,int>> vec;
    if(m.size() > 2) {
        return "NO";
    } else if(m.size() == 1) {
        return "YES";
    } else {
        for(auto mp : m) {
            vec.push_back(make_pair(mp.first, mp.second));
        }
        sort(vec.begin(), vec.end(),
             [](pair<int,int> a, pair<int,int> b) {
                 if(a.first > b.first) return false;
                 else return true;
             });
        if(vec[0].first==1 && vec[0].second==1) { return "YES"; }
        else { return "NO"; }
    }
}

int main() {
    printf("%s",isValid("aaaaabc").c_str());
}
