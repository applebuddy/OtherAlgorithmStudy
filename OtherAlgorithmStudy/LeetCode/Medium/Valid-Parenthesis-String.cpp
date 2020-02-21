//
//  Valid-Parenthesis-String.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/21.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: 문제풀이

#if 0
#include <string>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    bool checkValidString(string s) {
        stack<int> STK; // '(' 괄호문자의 인덱스를 기록하는 스택
        stack<int> STK2; // '*' 문자의 인덱스를 기록하는 스택
        
        for(int i=0; i<s.length(); i++) {
            if(s[i]=='(') STK.push(i); // '(' 괄호문자의 인덱스 기록
            else if(s[i]=='*') STK2.push(i); // '*' 문자의 인덱스 기록
            else { // 만약 ')' 괄호가 나왔다면
                if(!STK.empty()) STK.pop(); // 앞서 '(' 괄호가 있는지 확인 있으면 pop()
                else if(!STK2.empty()) STK2.pop(); // 2순위로 *이 있는지 확인, 있으면 pop()
                else return false; // '(', '*' 전부 없으면 올바르지 않은 괄호이므로 false 리턴
            }
        }
        
        while(!STK.empty()) { // STK이 전부 비어야 유효한 괄호이므로 이를 체크
            if(!STK2.empty() && STK2.top() > STK.top()) { // '(' 괄호보다 뒤에 '*'이 존재하는지 체크
                STK.pop(); // 존재하면 '(', '*'를 한개씩 pop()
                STK2.pop();
            }
            else return false; // 만약 괄호성립이 안되면 false 리턴
        }
        return true; // 위의 while문 과정 간 문제가 없었고, STK size가 0이면 true 리턴
    }
};
#endif
