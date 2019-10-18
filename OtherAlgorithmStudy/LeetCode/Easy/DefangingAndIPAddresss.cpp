//
//  DefangingAndIPAddresss.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 19/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
#include <vector>
using namespace std;

class DefangingAndIPAddresses {
public:
    string defangIPaddr(string address) {
        vector<char> CH(address.begin(), address.end());
        CH.push_back('\0');
        string Ans = "";
        char *ch = &CH[0];
        char *tok;
        tok = strtok(ch,".");
        while(tok!=NULL) {
            Ans += tok;
            tok = strtok(NULL,".");
            if(tok!=NULL) Ans += "[.]";
        }
        return Ans;
    }
};
