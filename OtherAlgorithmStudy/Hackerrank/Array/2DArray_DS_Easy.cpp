//
//  2DArray_DS.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 23/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - 2D Array - DS, 모래시게 문제
// MARK: 배열 각각에 모래시계 위치의 값을 합한 요소가 들어간다. (6x6범위 내 4x4 범위로)
// 각각의 인덱스의 합들 중 가장 큰 값을 출력해라!
// ex) 배열 예시
//    -9 -9 -9  1 1 1
//    0 -9  0  4 3 2
//    -9 -9 -9  1 2 3
//    0  0  8  6 6 0
//    0  0  0 -2 0 0
//    0  0  1  2 4 0

// 4 x 4 영역의 합 결과
//    -63, -34, -9, 12,
//    -10, 0, 28, 23,
//    -27, -11, -2, 10,
//    9, 17, 25, 18

#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> POS = {{0,0}, {0,1}, {0,2}, {1,1}, {2,0}, {2,1}, {2,2}};

int hourglassSum(vector<vector<int>> arr) {
    int Ans = -100;
    for(int i=0; i<=arr.size()-3; i++) {
        for(int j=0; j<=arr[0].size()-3; j++) {
            int sum = 0;
            for(int k=0; k<POS.size(); k++) {
                sum += arr[i+POS[k][0]][j+POS[k][1]];
            }
            Ans = max(Ans, sum);
        }
    }
    return Ans;
}

//#include <stdio.h>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//vector<pair<int,int>> chk = {{0,0}, {0,1}, {0,2}, {1,1}, {2,0}, {2,1}, {2,2}};
//// Complete the hourglassSum function below.
//int hourglassSum(vector<vector<int>> arr) {
//    int ans=-100;
//    for(int i=0; i<4; i++) {
//
//        for(int j=0; j<4; j++) {
//            int cnt=0;
//            for(auto v : chk) {
//                cnt+=arr[i+v.first][j+v.second];
//            }
//            ans = max(ans,cnt);
//        }
//    }
//    return ans;
//}
