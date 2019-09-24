//
//  BubbleSorting_C++.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 05/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// MARK: Bubble Sorting
// MARK: Bubble Sorting Problem
// -> 버블 소팅으로 오름파순 정렬을 하는데 드는 소요와 컬렉션 요소의 양끝 값을 출력해보자

/// swap(), front(), back() 사용 통과 답안)
void countSwaps(vector<int> a) {
    int Cnt = 0;
    for(int i=0; i<a.size(); i++) {
        for(int j=0; j<a.size()-1; j++) {
            if(a[j] > a[j+1]) {
                swap(a[j],a[j+1]);
                Cnt++;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",Cnt);
    printf("First Element: %d\n",a.front());
    printf("Last Element: %d\n",a.back());
    return;
}

/// 수동 스왑작어 사용 통과 답안)
//void countSwaps(vector<int> a) {
//    int cnt = 0;
//    for(int i=0; i<a.size(); i++) {
//        for(int j=0; j<a.size()-1; j++) {
//            if(a[j]>a[j+1]) {
//                int temp = a[j];
//                a[j] = a[j+1];
//                a[j+1] = temp;
//                cnt++;
//            }
//        }
//    }
//    printf("Array is sorted in %d swaps.\n",cnt);
//    printf("First Element: %d\n",a[0]);
//    printf("Last Element: %d\n",a[a.size()-1]);
//}
