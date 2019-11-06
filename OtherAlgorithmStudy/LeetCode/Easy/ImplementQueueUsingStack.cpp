//
//  ImplementQueueUsingStack.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 06/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - ImplementQueueUsingStack Problem
#if 0
#include <stack>
using namespace std;

class MyQueue {
public:
    stack<int> leftStack;
    stack<int> rightStack;
    /** Initialize your data structure here. */
    MyQueue() {}
    
    /** Push element x to the back of queue. */
    void push(int x) {
        rightStack.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int top = 0;
        if(leftStack.empty()) {
            while(!rightStack.empty()) {
                leftStack.push(rightStack.top());
                rightStack.pop();
            }
        }
        top = leftStack.top();
        leftStack.pop();
        return top;
    }
    
    /** Get the front element. */
    int peek() {
        if(leftStack.empty()) {
            while(!rightStack.empty()) {
                leftStack.push(rightStack.top());
                rightStack.pop();
            }
        }
        return leftStack.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return leftStack.empty() && rightStack.empty();
    }
};
#endif
