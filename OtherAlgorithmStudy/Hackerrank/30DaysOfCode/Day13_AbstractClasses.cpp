//
//  Day13_AbstractClasses.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 30/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day 13: AbstractClasses : Class Implementation Practic

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook : public Book {
private:
    int price=0;
public:
  
    MyBook(string title, string author, int price): Book(title,author){
        this->price = price;
    }

    void display() {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "Price: " << this->price << endl;
    }
};
