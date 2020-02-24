//
//  공백없애기_43259.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/25.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: - 공백없애기 43259
// MARK: 문제풀이

#if 0
#include <iostream>
#include <sstream>
using namespace std;
int main() {
    string S, temp, Ans="";
    getline(cin, S, '\n');
    for(stringstream ss(S); ss>>temp;) Ans += temp;
    printf("%s\n",Ans.c_str());
    return 0;
}
#endif
