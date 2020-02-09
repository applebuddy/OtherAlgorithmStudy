//
//  Unique-Paths.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: Unique Paths
// MARK: - DP 문제풀이
#if 0
#include <vector>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> G(n+1, vector<int>(m+1,0));
        vector<vector<int>> DP = G;
        DP[0][1] = 1;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                DP[i][j] = DP[i-1][j] + DP[i][j-1];
            }
        }
        return DP[n][m];
    }
};
#endif
