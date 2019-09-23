//
//  Two Strings.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 06/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Two Strings
// MARK: 두 개의 스트링 내 중복 된 문자(Character) 값이 존재하는 지 확인 한다.
// => 만약 중복된 문자 값이 존재한다면, "YES", 미 존재 시 "NO"를 반환하는 함수를 구현한다.

#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <unordered_map>

using namespace std;

// unordered_map 사용 통과 답안 예시)
string twoStrings(string s1, string s2) {
    unordered_map<char,int> UMP;
    for(auto s : s1) UMP[s]++;
    for(auto s : s2) {
        UMP[s]--;
        if(UMP[s]>=0) return "YES";
    }
    return "NO";
}


// set 사용 통과 답안 예시)
//using namespace std;
//
//typedef pair<string,int> Pair;
//
//set<char> m1;
//set<char> m2;
//
//string twoStrings(string s1, string s2) {
//    for(auto s : s1) {
//        m1.insert(s);
//    }
//    for(auto s : s2) {
//        m2.insert(s);
//    }
//    
//    if(m1.size() > m2.size()) {
//        for(auto s : m2) {
//            if (m1.find(s) != m1.end()) {
//                return "YES";
//            }
//        }
//    } else {
//        for(auto s : m1) {
//            if (m2.find(s) != m2.end()) {
//                return "YES";
//            }
//        }
//    }
//    return "NO";
//}
//
//int main() {
//    printf("%s",twoStrings("hello","world").c_str());
//    printf("%s",twoStrings("hi","world").c_str());
//    return 0;
//}
