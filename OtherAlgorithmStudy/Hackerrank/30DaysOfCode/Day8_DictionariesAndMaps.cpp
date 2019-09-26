//
//  Day8_DictionariesAndMaps.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 25/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Dictionaries And Maps : Hash Basic Problem
/// MARK: n개의 이름, 8자리 숫자를 입력 후 쿼리를 보내 해당 전화번호부 정보가 있는지 없는지를 출력하라!!

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int dictionariesAndMapsExample() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    unordered_map<string,int> UMP;
    int N;
    cin >> N;
    for(int i=0; i<N; i++) {
        string str;
        int num;
        cin >> str >> num;
        if(to_string(num).length()==8) UMP[str]=num;
    }

    string name;
    while(cin >> name) {
        if(UMP[name]!=0) printf("%s=%d\n",name.c_str(),UMP[name]);
        else printf("Not found\n");
    }
    return 0;
}
