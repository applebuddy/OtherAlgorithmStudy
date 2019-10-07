//
//  Day14_Scope.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
      public:
      int maximumDifference;

    Difference(vector<int> elements) {
        this->elements = elements;
    }

    void computeDifference() {
        sort(elements.begin(), elements.end());
        this->maximumDifference = abs(elements[0]-elements[elements.size()-1]);
    }

};

void handleDifferenceClass() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    d.computeDifference();
    
    cout << d.maximumDifference;
    return;
}

//int main() {
//    ios_base::sync_with_stdio(0); cin.tie(0);
//    handleDifferenceClass();
//    return 0;
//}
