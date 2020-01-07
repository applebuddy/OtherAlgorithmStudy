//
//  N-Queens.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/07.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: N-Queens

#if 0
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class N_Queens {
public:
    vector<vector<string>> Ans;
    int tx[2] = {-1, -1};
    int ty[2] = {-1, 1};
    
    bool checkG(int x, int y, vector<string> &G) {
        for(int i=0; i<G.size(); i++) {
            if(x!=i && G[i][y]=='Q') return false;
            if(y!=i && G[x][i]=='Q') return false;
        }
        
        for(int i=0; i<2; i++) {
            int newX = x + tx[i];
            int newY = y + ty[i];
            while(!(newX < 0 || newY < 0 || newX >= G.size() || newY >= G.size())) {
                if(G[newX][newY]=='Q') return false;
                newX += tx[i];
                newY += ty[i];
            }
        }

        return true;
    }
    
    void DFS(vector<string> &G, int idx) {
        if(idx >= G.size()) {
            Ans.push_back(G);
            printf("now idx : %d\n",idx);
            return;
        }
        
        for(int i=0; i<G[0].length(); i++) {
            G[idx][i]='Q';
            if(checkG(idx, i, G)) {
                DFS(G, idx+1);
            }
            G[idx][i]='.';
        }
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<string> G(n, string(n,'.'));
        DFS(G, 0);
        return Ans;
    }
};
#endif
