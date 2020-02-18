//
//  Delete-Operation-For-Two-Strings.swift
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/18.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - DP 문제풀이
/*
 
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>> DP(word1.length()+1, vector<int>(word2.length()+1, 0));
        for(int i=0; i<=word1.length(); i++) {
            for(int j=0; j<=word2.length(); j++) {
                if(i==0 || j==0) DP[i][j] = i+j;
                else if(word1[i-1] == word2[j-1]) DP[i][j] = DP[i-1][j-1];
                else DP[i][j] = min(DP[i-1][j],DP[i][j-1]) + 1;
            }
        }
        
        return DP[word1.length()][word2.length()];
    }
};
*/
