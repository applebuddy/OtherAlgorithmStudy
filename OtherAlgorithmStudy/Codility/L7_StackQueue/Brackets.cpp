//
//  Brackets.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Brackets
/// MARK: 문자열 S에는 '{', '(', '[', ']', '}', ')' 등이 들어있다. 이 문자열이 괄호가 성립하는지 확인하라!
///       => 올바른 괄호면 1, 올바르지 않으면 0 출력

/// 효율성, 정확성 통과
/// * 답안 복잡도 O(N)
#include <stack>
#include <string>

using namespace std;

int solution(string &S) {
    stack<char> stk;
    
    for(auto s : S) {
        if(s=='(' || s=='{' || s=='[') stk.push(s);
        else {
            if(stk.empty()) return 0;
            if(stk.top()) {
                if((stk.top()=='(' && s==')')
                   || (stk.top()=='{' && s=='}')
                   || (stk.top()=='[' && s==']')) stk.pop();
                else return 0;
            }
        }
    }
    return stk.empty() ? 1 : 0;
}
