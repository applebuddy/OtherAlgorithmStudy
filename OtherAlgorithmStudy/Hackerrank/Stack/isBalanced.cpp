//
//  isBalanced.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - isBalanced : Stack Problem
/// MARK: 입력받은 문자열, s가 올바른 괄호인지 확인하라!!

#include <iostream>
#include <stack>
#include <string>

using namespace std;

/// MARK: - stack<int> 사용, 통과 답안)
string isBalanced(string s) {
    stack<char> stk;
    for(auto str : s) {
        if(str == '(' || str == '{' || str == '[') {
            stk.push(str);
        } else {
            if(stk.empty()) return "NO";
            if((str == ')' && stk.top() == '(')
            || (str == ']' && stk.top() == '[')
            || (str == '}' && stk.top() == '{')) stk.pop();
            else return "NO";
        }
    }
    return stk.empty() ? "YES" : "NO";
}

//// Complete the isBalanced function below.
//string isBalanced(string s) {
//    stack<char> stk;
//    
//    for(int i=0; i<s.length(); i++) {
//        if(s[i]=='{' || s[i]=='(' || s[i]=='[') {
//            stk.push(s[i]);
//        } else {
//            if(stk.empty()) return "NO";
//            if(s[i]=='}') {
//                if(stk.top()=='{') stk.pop();
//                else return "NO";
//            } else if(s[i]==')') {
//                if(stk.top()=='(') stk.pop();
//                else return "NO";
//            } else if(s[i]==']') {
//                if(stk.top()=='[') stk.pop();
//                else return "NO";
//            }
//        }
//    }
//    if(stk.empty()) return "YES";
//    else return "NO";
//}
//
//int main() {
//    printf("%s",isBalanced("{[()]}").c_str());
//    printf("%s",isBalanced("{[(])}").c_str());
//    printf("%s",isBalanced("{{[[(())]]}}").c_str());
//}
