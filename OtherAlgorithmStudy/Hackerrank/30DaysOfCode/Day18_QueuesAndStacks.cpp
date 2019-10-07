//
//  Day18_QueuesAndStacks.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 08/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Queues And Stacks : Basic Queue Stack Problem

#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class StackNQueue {
private:
    stack<int> STK;
    queue<int> Q;
public:
    void pushCharacter(const char &ch) {
        STK.push(ch);
    }

    char popCharacter() {
        char ch = ' ';
        if(!STK.empty()) {
            ch = STK.top();
            STK.pop();
        }
        return ch;
    }

    void enqueueCharacter(const char &ch) {
        Q.push(ch);
    }

    char dequeueCharacter() {
        char ch = ' ';
        if(!Q.empty()) {
            ch = Q.front();
            Q.pop();
        }
        return ch;
    }
};
