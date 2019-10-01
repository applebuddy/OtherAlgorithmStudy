//
//  Day11_2DArrays.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 02/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK; - 2D Arrays

#include <iostream>
#include <vector>
using namespace std;

typedef pair<int,int> Pair;

Pair pos[] = {{0,0},{0,1},{0,2},{1,1},{2,0},{2,1},{2,2}};

void _2dArrays() {
    
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int Ans=-100;
    for(int i=0; i<4; i++) {
        for(int j=0; j<4; j++) {
            int sum=0;
            for(int k=0; k<7; k++) {
                sum+=arr[i+pos[k].first][j+pos[k].second];
            }
            Ans = Ans < sum ? sum : Ans;
        }
    }

    printf("%d\n",Ans);
    return;
}

//int main()
//{
//    _2dArrays();
//    return 0;
//}

