//
//  LargestRectangle.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - LargestRectangle
// MARK: 아파트의 높이가 정의 된 배열 h를 참고해 아파트 영역 내에서 만들 수 있는 최대 직사각형의 크기를 구하라!!

//    Sample Input
//
//    5
//    1 2 3 4 5
//
//    Sample Output
//
//    9

#include <vector>
#include <iostream>

using namespace std;

/// max() 미사용 통과 답안)
long largestRectangle2(vector<int> h) {
    int Ans = 0;
    for(int i=0; i<h.size(); i++) {
        int Cnt = 1;
        for(int j=i-1; j>=0; j--) {
            if(h[i]<=h[j]) Cnt++;
            else break;
        }

        for(int j=i+1; j<h.size(); j++) {
            if(h[i]<=h[j]) Cnt++;
            else break;
        }

        Ans = (Ans < Cnt*h[i]) ? Cnt*h[i] : Ans;
    }
    return Ans;
}

/// max() 사용 통과 답안)
//long largestRectangle(vector<int> h) {
//    int Ans = 0;
//    for(int i=0; i<h.size(); i++) {
//        int index = 1;
//        Ans = max(Ans, index * h[i]);
//        for(int j=i-1; j>=0; j--) {
//            if(h[i] > h[j]) { break; }
//            index++;
//            Ans = max(Ans, index * h[i]);
//        }
//        
//        if(i+1 > h.size()) { continue; }
//        for(int j=i+1; j<h.size(); j++) {
//            if(h[i] > h[j]) { break; }
//            index++;
//            Ans = max(Ans, index * h[i]);
//        }
//    }
//    return Ans;
//}
//
//int main() {
//    printf("%ld",largestRectangle({6320, 6020, 6098, 1332, 7263, 672, 9472, 2838, 3401, 9494}));
//}
