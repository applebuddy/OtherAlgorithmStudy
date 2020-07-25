//
//  Edit-Distance.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/21.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - Edit-Distance
// MARK: LCS(최장공통수열) 문제풀이
#if 0
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> DP(word1.length()+1, vector<int>(word2.length()+1,0));
        for(int i=0; i<=word1.length(); i++) {
            for(int j=0; j<=word2.length(); j++) {
                if(i==0 || j==0) DP[i][j] = i+j;
                else if(word1[i-1]==word2[j-1]) DP[i][j] = DP[i-1][j-1];
                else {
                    DP[i][j] = min(DP[i-1][j], min(DP[i][j-1], DP[i-1][j-1])) + 1;
                }
            }
        }
        return DP[word1.length()][word2.length()];
    }
};
#endif
