//
//  Max Min.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 10/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Max Min
// MARK: arr 배열 내 k개의 숫자집합의 최솟값-최댓값의 최소 차이값을 구하라!

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//// Complete the maxMin function below.
//int maxMin(int k, vector<int> arr) {
//    sort(arr.begin(), arr.end());
//    int minV = 200000001;
//    for(int i=0; i<=arr.size()-k; i++) {
//        minV = min(minV,arr[i+k-1]-arr[i]);
//        if(minV==0) return 0;
//    }
//    return minV;
//}
//
//int main() {
//    printf("%d",maxMin(3,{100,200,300,350,400,401,402}));
//}
