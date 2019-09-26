//
//  Day7_Arrays.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 24/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day7_Arrays
/// MARK: 입력받은 배열 요소를 역순으로 출력하라!!

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int arrayReverseExample() {
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    reverse(arr.begin(), arr.end());
    for(auto v : arr) printf("%d ",v);

    return 0;
}
