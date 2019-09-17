//
//  isBalanced.cpp
//  CommonAlgorithmPractice
//
//  Created by MinKyeongTae on 07/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

//#include <iostream>
//#include <stack>
//
//using namespace std;
//
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
