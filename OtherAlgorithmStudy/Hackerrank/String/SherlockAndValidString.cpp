//
//  Sherlock and the Valid String.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Sherlock and the Valide String
// MARK: 하나의 알파벳 제거만으로(제거 안하거나) 알파벳의 갯수가 일치하도록 할 수 있는 지 확인 하여 가능하면 "Yes", 불가능 시 "NO"를 반환하라!!

#include <iostream>
#include <vector>
#include <array>
#include <cmath>
#include <unordered_map>
#include <map>

using namespace std;

/// ✓ vector<Pair>, unordered_map<Pair> 사용, 통과 답안 예시)
typedef pair<int,int> Pair;

string isValid(string s) {
    unordered_map<char,int> UMP;
    unordered_map<int,int> CNT;
    vector<Pair> CMP;
    for(auto str : s) UMP[str]++;
    for(auto mp : UMP) CNT[mp.second]++;
    if(CNT.size()==1) return "YES";
    else if(CNT.size()==2) {
        for(auto mp : CNT) CMP.push_back(make_pair(mp.first,mp.second));
        sort(CMP.begin(), CMP.end(), [](const Pair& a, const Pair& b) {
            return a.first < b.first;
        });
        if(CMP[0].first==1 && CMP[0].second==1) return "YES";
        if(CMP[0].second==1 || CMP[1].second==1) {
            if(abs(CMP[0].first-CMP[1].first)==1) return "YES";
        }
    }
    else return "NO";
    return "NO";
}

/// vector<Pair>, map 사용 통과답안 예시)
//array<int, 26> arr = {0,};
//map<int,int> m;
//
//string isValid(string s) {
//
//    int max = 0;
//    
//    // 알파벳 별 등장 횟수를 기록한다.
//    for(auto v : s ) {
//        arr[v-'a']++;
//        max = fmax(max,v-'a');
//    }
// 
//    // map을 사용하여 등장횟수의 빈도를 기록한다.
//    for(int i=0; i<=max; i++) {
//        if(arr[i] != 0) m[arr[i]]++;
//    }
//
//    
//    // 1종류만 있을 경우 바꿀 게 없으므로, -> "YES"
//    // 2종류 이상일 경우 적은 등장횟수가 1이고 빈도수도 1이어야 한다.
//    // 등장횟수가 3종류 이상이면 한개의 값만으로 변경 불가능 -> "NO"
//    // 그 외에는 -> "NO"
//    vector<pair<int,int>> vec;
//    if(m.size() > 2) {
//        return "NO";
//    } else if(m.size() == 1) {
//        return "YES";
//    } else {
//        for(auto mp : m) {
//            vec.push_back(make_pair(mp.first, mp.second));
//        }
//        sort(vec.begin(), vec.end(),
//             [](pair<int,int> a, pair<int,int> b) {
//                 if(a.first > b.first) return false;
//                 else return true;
//             });
//        if(vec[0].first==1 && vec[0].second==1) { return "YES"; }
//        else { return "NO"; }
//    }
//}

//int main() {
//    printf("%s",isValid("aaaaabc").c_str());
//}
