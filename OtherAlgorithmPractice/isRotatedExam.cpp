//
//  땅따먹기_12913.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 10/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <string.h>
using namespace std;

int main(){
    string os = "abs";
    string s = os;
    for(int i=0; i<s.length(); i++){
        string t = s.substr(0,1);
        s.erase(0,1);
        s+=t;
        printf("%s\n",s.c_str());
        if(s==os) printf("%s\n","true");
        else printf("%s\n","false");
    }
    return 0;
    
}
