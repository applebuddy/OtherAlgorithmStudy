//
//  CatsAndAMouse.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 26/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <cmath>

using namespace std;

string catAndMouse(int x, int y, int z) {
    if(abs(z-x)<abs(z-y)) return "Cat A";
    else if(abs(z-x)>abs(z-y)) return "Cat B";
    else return "Mouse C";
}
