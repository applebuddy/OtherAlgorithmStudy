
//
//  TimeConversion.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Time Conversion : Basic Algorithm Problem
//  * AM, PM 규격을 00~24H 포맷으로 변경하여 출력하라!!

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string timeConversion(string s) {
    string Ans = "";
    string str = "";
    str += s[s.length()-2];
    str += s[s.length()-1];
    string tStr = s.substr(0,2);
    int temp = stoi(tStr);
    if(str == "AM") {
        if(temp >= 12) Ans = "00" + s.substr(2,6);
        else Ans = s.substr(0,8);
        return Ans;
    } else {
        if(temp >= 12) Ans = s.substr(0,8);
        else Ans = to_string(temp+12) + s.substr(2,6);
        return Ans;
    }
}
