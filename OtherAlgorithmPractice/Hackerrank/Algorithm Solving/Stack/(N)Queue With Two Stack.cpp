//
//  Stack.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 09/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <stack>
//#include <queue>
//using namespace std;
//
///// 두개의 스택을 이용한 큐 구성, 50% 테스트 시간초과가 발생...
//class MyQueueWithStack {
//    
//public:
//    stack<int> stack_newest_on_top, stack_oldest_on_top;
//    void push(int x) {
//        stack_oldest_on_top.push(x);
//        
//        stack<int> temp = stack_oldest_on_top;
//        while(!stack_newest_on_top.empty()) stack_newest_on_top.pop();
//        while(!temp.empty()) {
//            stack_newest_on_top.push(temp.top());
//            temp.pop();
//        }
//    }
//    
//    void pop() {
//        stack_newest_on_top.pop();
//        
//        stack<int> temp = stack_newest_on_top;
//        while(!stack_oldest_on_top.empty()) stack_oldest_on_top.pop();
//        while(!temp.empty()) {
//            stack_oldest_on_top.push(temp.top());
//            temp.pop();
//        }
//    }
//    
//    int front() {
//        return stack_newest_on_top.top();
//    }
//};
//
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
