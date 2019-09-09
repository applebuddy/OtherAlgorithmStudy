//
//  Minimum Swaps.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - Minimum Swaps 2
// MARK: 두개 쌍으로 숫자를 최소한으로 스왑한 횟수를 출력하라!

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//// Complete the minimumSwaps function below.
//int minimumSwaps(vector<int> arr) {
//    int Ans = 0;
//    for(int i=0; i<arr.size()-1; i++) {
//        // 이미 정렬되어있으면 다음 숫자로 넘어간다.
//        if(arr[i]==i+1) continue;
//        // 정렬확인이 안된 구간 중 현재 인덱스(i)에 위치해야 하는 숫자, i+1 을 찾아 i위치의 숫자와 스왑한다.
//        vector<int>::iterator iter = find(arr.begin()+i+1, arr.end(), i+1);
//        swap(arr[i],arr[iter-arr.begin()]);
//        // i번째 숫자를 스왑할때마다 횟수를 기록한다.
//        Ans++;
//    }
//    return Ans;
//}
//
//int main() {
//
//    printf("%d",minimumSwaps({4, 3, 1, 2}));
//    return 0;
//}
