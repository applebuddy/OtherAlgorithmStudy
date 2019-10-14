//
//  RotateImage.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 14/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - RotateImage
#if 0
#include <iostream>
#include <vector>
using namespace std;

/// MARK: 이중 vector 사용 통과답안, 81.89% / 97.56%

void rotate(vector<vector<int>>& matrix) {
    vector<vector<int>> V(matrix.size(),vector<int>(matrix[0].size(),0));
    for(int i=0; i<matrix.size(); i++) {
        for(int j=0; j<matrix[0].size(); j++) {
            V[i][j] = matrix[matrix.size()-j-1][i];
        }
    }
    matrix = V;
}

int main() {
    int N,M; cin>>N>>M;
    vector<vector<int>> V(N,vector<int>(M,0));
    for(int i=0; i<N; i++)
        for(int j=0; j<M; j++) cin>>V[i][j];
    rotate(V);
    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) printf("%d ", V[i][j]);
        printf("\n");
    }
    return 0;
}
#endif
