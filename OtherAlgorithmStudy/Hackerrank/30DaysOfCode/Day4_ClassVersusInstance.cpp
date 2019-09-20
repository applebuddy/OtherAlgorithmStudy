//
//  Day4_ClassVersusInstance.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 21/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Class vs. Instance
/// MARK: 클래스 인스턴스 생성 인자값에 따른, 멤버 함수사용에 따른 변화 출력 예제

#include <iostream>
using namespace std;

class Person {
public:
    int age;
    Person(int initialAge);
    void amIOld();
    void yearPasses();
};

Person::Person(int initialAge) {
    if(initialAge < 0) printf("Age is not valid, setting age to 0.\n");
    this->age = initialAge;
}

void Person::amIOld() {
    if(this->age < 13) {
        printf("You are young.\n");
    } else if(this->age >= 13 && this->age < 18) {
        printf("You are a teenager.\n");
    } else {
        printf("You are old.\n");
    }
}

void Person::yearPasses() {
    this->age++;
}

int classVersusInstance() {
    int t;
    int age;
    cin >> t;
    for(int i=0; i < t; i++) {
        cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
            p.yearPasses();
        }
        p.amIOld();
        
        cout << '\n';
    }
    
    return 0;
}
