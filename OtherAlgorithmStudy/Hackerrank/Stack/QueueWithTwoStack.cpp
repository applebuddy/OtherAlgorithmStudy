//
//  Stack.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Queue With Two Stack : Double Stack Problem
/// MARK: 두 개의 스택을 사용해서 큐를 구성해라!!


#include <stack>
#include <iostream>

using namespace std;

void reverseStack(stack<int> &nStk, stack<int> &oStk) {
    while(!oStk.empty()) {
        nStk.push(oStk.top());
        oStk.pop();
    }
}

class MyQueue {
  
    public:
        stack<int> stack_newest_on_top, stack_oldest_on_top;
        void push(int x) {
            stack_oldest_on_top.push(x);
        }

        void pop() {
            if(stack_newest_on_top.empty() && !stack_oldest_on_top.empty()) {
                reverseStack(stack_newest_on_top, stack_oldest_on_top);
            }
            stack_newest_on_top.pop();
        }

        int front() {
            if(stack_newest_on_top.empty()) {
                if(!stack_oldest_on_top.empty()) {
                reverseStack(stack_newest_on_top, stack_oldest_on_top);
                    return stack_newest_on_top.top();
                }
            }

            return stack_newest_on_top.top();
        }
};

///// 순수 큐로만 구성한 MyQueue, 문제를 통과하지만 실제 문제의 취지는 큐를 이용하는 것이 아니다.
//class MyQueue {
//    
//public:
////    stack<int> stack_newest_on_top, stack_oldest_on_top;
//    queue<int> q;
//    void push(int x) {
//        q.push(x);
//    }
//    
//    void pop() {
//        q.pop();
//    }
//    
//    int front() {
//        return (!q.empty()) ? q.front() : 0;
//    }
//};
//
//int main() {
//    MyQueue q1;
//    int q, type, x;
//    cin >> q;
//    
//    for(int i = 0; i < q; i++) {
//        cin >> type;
//        if(type == 1) {
//            cin >> x;
//            q1.push(x);
//        }
//        else if(type == 2) {
//            q1.pop();
//        }
//        else cout << q1.front() << endl;
//    }
//    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//    return 0;
//}
