//
//  Day12_Inheritance.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 29/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day12_Inheritance
//  * 클래스 상속 및 초기화, 기능 구현 연습
#include <iostream>
#include <vector>

using namespace std;

class Person{
    protected:
        string firstName;
        string lastName;
        int id;
    public:
        Person(string firstName, string lastName, int identification){
            this->firstName = firstName;
            this->lastName = lastName;
            this->id = identification;
        }
        void printPerson(){
            cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n";
        }
};

class Student :  public Person{
    private:
        vector<int> testScores;
        int avr = 0;
        char Grade = 'T';
        vector<int> scores;
    public:
        Student(string firstName, string lastName, int id, vector<int> scores): Person(firstName,lastName,id) {
            this->scores = scores;
            int sum = 0;
            for(int i=0; i<scores.size(); i++) sum+=scores[i];
            avr = sum/scores.size();
        }

        void printPerson() {
            printf("Name: %s, %s\n",lastName.c_str(),firstName.c_str());
            printf("ID: %d\n",id);
        }
        
        char calculate() {
            if(avr >= 90) this->Grade = 'O';
            else if(avr >= 80) this->Grade = 'E';
            else if(avr >= 70) this->Grade = 'A';
            else if(avr >= 55) this->Grade = 'P';
            else if(avr >= 40) this->Grade = 'D';
            else this->Grade = 'T';

            return this->Grade;
        }
};
