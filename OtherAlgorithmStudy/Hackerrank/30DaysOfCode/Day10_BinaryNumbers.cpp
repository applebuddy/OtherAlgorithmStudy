//
//  Day10_BinaryNumbers.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 27/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>

using namespace std;

int convertBinaryAndCheck(int n) {
    int cnt=0, Ans=0;
    while(n>0) {
        int temp = n % 2;
        if(temp==1) {
            cnt++;
            Ans = Ans<cnt ? cnt : Ans;
        }
        else cnt=0;
        n /= 2;
    }
    return Ans;
}

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int Ans = convertBinaryAndCheck(n);
    printf("%d\n",Ans);
    return 0;
}
