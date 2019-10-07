//
//  Day19_Interfaces.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 08/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day19_Interfaces : Interface Implementation Practice

#include <iostream>
using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};
class Calculator : public AdvancedArithmetic {
public:
    // AdvancedArithmetic을 상속받은 Calculator는 인터페이스인 divisorSum을 구현해야한다.
    int divisorSum(int n) {
        int Ans=0;
        for(int i=1; i<=n; i++) Ans += n%i==0 ? i : 0;
        return Ans;
    }
};
