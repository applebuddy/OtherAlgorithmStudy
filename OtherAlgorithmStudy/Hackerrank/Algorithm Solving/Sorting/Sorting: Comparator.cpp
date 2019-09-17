//
//  Sorting: Comparator.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Sorting: Comparator
// MARK: 정렬 사용자정의 함수 만들기!!

// <INPUT>
//    5
//    amy 100
//    david 100
//    heraldo 50
//    aakansha 75
//    aleksa 150

// =>

// <OUTPUT>
//    aleksa 150
//    amy 100
//    david 100
//    aakansha 75
//    heraldo 50
//    => 와 같이 점수 내림차순, 점수가 동일할 시 알파벳 순으로 선수들을 정렬하라!

#include<cmath>
#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct Player {
    int score;
    string name;
};

bool compareName(string s, string s2) {
    for(int i=0; i<min(s.length(),s2.length()); i++) {
        if(s[i] < s2[i]) {
            return false;
        } else if(s[i] == s2[i]) {
            continue;
        } else {
            return true;
        }
    }
    
    if(s.length() > s2.length()) {
        return true;
    } else {
        return false;
    }
}

class Checker{
public:
    // complete this method
    static int comparator(Player a, Player b)  {
        if(a.score < b.score) {
            return -1;
        } else if(a.score == b.score) {
            if(compareName(a.name,b.name)) { return -1; }
            else { return 0; }
        } else {
            return 0;
        }
    }
};



bool compare(Player a, Player b) {
    if(Checker::comparator(a,b) == -1)
        return false;
    return true;
}
