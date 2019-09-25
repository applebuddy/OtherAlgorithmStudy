//
//  What Flavors.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - What Flavors : HashTable Problem
// MARK: 두개의 맛의 조합으로 money에 맞는 맛을 구매해라!

//    Sample Input
//
//    2
//    4
//    5
//    1 4 5 3 2
//    4
//    4
//    2 2 4 3
//    Sample Output
//
//    1 4
//    1 2

#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

/// unordered_map 사용 통과답안
 void whatFlavorsWithUMP(vector<int> cost, int money) {
    unordered_map<int,int> UMP;
    for(int i=0; i<cost.size(); i++) UMP[cost[i]]=i+1;
    for(int i=0; i<cost.size(); i++) {
        unordered_map<int,int>::iterator iter = UMP.find(money-cost[i]);
        if(iter!=UMP.end() && i+1!=(*iter).second) {
        printf("%d %d\n",i+1,(*iter).second);
        return;
        }
    }
    return;
}

/// map 사용 통과답안
void whatFlavorsWithMP(vector<int> cost, int money) {
    map<int,int> m;
    for(int i=0; i<cost.size(); i++) {
        m[cost[i]] = i;
    }
    
    for(int i=0; i<cost.size()-1; i++) {
        int chk = cost[i];
        map<int,int>::iterator iter = m.find(abs(money-chk));
        if(iter != m.end() && i+1 != (*iter).second+1) {
            printf("%d %d\n",i+1,(*iter).second+1);
            return;
        }
    }
    return;
}
