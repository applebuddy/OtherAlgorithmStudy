//
//  Hash Tables: Ransom Note.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 06/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//


// MARK: - Hash Tables: Ransom Note
// MARK: magazine의 문자열 요소들이 note에 전부 포함하고 있는지를 판별해라! 전부 포함한다면 "Yes", 어느하나라도 미포함 시 "No"를 출력

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <set>

//using namespace std;
//
//vector<string> split_string(string);
//map<string,int> m;
//map<string,int> m2;
//
//// Complete the checkMagazine function below.
//void checkMagazine(vector<string> magazine, vector<string> note) {
//    
//    // 중복없이 순수 키값들을 비교하기 위해 사용한다.
//    set<string> noteSet;
//    
//    // magazin의 문자 빈도수를 기록한다.
//    for(auto v : magazine) {
//        m[v]++;
//    }
//    
//    // note의 문자 빈도수를 기록한다.
//    // noteSet을 통해 중복제거한 키값도 저장해 둔다.
//    for(auto v : note) {
//        m2[v]++;
//        noteSet.insert(v);
//    }
//    
//    // 키 값들을 순회하면서 magazine보다 적은 빈도수가 있다면, 요건 충족이 안됨을 의미하므로 -> "No"
//    for(auto s : noteSet) {
//        if(m[s] < m2[s]) {
//            printf("No\n");
//            return;
//        }
//    }
//    
//    // note 문자열들이 magazine을의 문자열을 모두 포함하고 있으므로 -> "YES"
//    printf("Yes\n");
//    return;
//}

//int main() {
//    vector<string> maga = {"two", "times", "three", "is", "not", "four", "coconuts"};
//    vector<string> memo = {"two", "times", "two", "is", "four"};
//    checkMagazine(maga,memo);
//    
//    return 0;
//}
