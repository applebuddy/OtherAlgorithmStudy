//
//  luck Balance.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// MARK: - luck Balance
// MARK: 중요도(contests[i][1])가 1일 경우 k를 하나 감소시키고 contests[i][0] 점수를 더할 수 있다. k가 부족해지면 contests[i][0]만큼 점수를 감소해야 한다.
// * contests[i][1]이 0이면 contests[i][0]는 그냥 더해주면 된다. 이런 조건 하에서 받을 수 있는 가장 높은점수를 반환하라!

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/// iterator 미사용, 세부정렬 설정 후 연산버전, 통과답안
int luckBalance2(int k, vector<vector<int>> contests) {
    int Ans = 0;
    sort(contests.begin(), contests.end(),
    [](const vector<int> &a, const vector<int> &b) {
        if(a[1]==b[1]) {
            return a[0] > b[0];
        }
        else return a[1] > b[1];
    });

    for(auto v : contests) {
        if(v[1]==1) {
            if(k>0) {
                Ans += v[0];
                k--;
            }
            else Ans -= v[0];
        } else {
            Ans += v[0];
        }
    }
    return Ans;
}

/// iterator 사용버전, 통과답안
int luckBalance(int k, vector<vector<int>> contests) {
    int Ans = 0;
    
    sort(contests.begin(), contests.end(),
         [](vector<int> con1, vector<int> con2) {
             return con1[0] > con2[0];
         });
    
    vector<vector<int>>::iterator iter;
    for(iter=contests.begin(); iter!=contests.end(); iter++) {
        if((*iter)[1]==1) {
            if(k>0) {
                Ans += (*iter)[0];
                k--;
            } else {
                Ans -= (*iter)[0];
            }
        } else {
            Ans += (*iter)[0];
        }
    }
    printf("%d\n",Ans);
    return Ans;
}

//int main() {
//    ios_base :: sync_with_stdio(0); cin.tie(0);
//    int n,k;
//    cin >> n >> k;
//    vector<vector<int>> contests(n,vector<int>(2,0));
//    for(int i=0; i<n; i++) {
//        cin >> contests[i][0] >> contests[i][1];
//    }
//    luckBalance2(k,contests);
//    return 0;
//}
