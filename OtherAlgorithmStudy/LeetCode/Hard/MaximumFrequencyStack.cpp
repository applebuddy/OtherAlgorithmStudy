//
//  MaximumFrequencyStack.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 06/11/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - MaximumFrequencyStack
#if 0
#include <stack>
#include <map>
#include <queue>
using namespace std;
    
/// MARK: - Time Limit Exceeded 버전)
class FreqStack {
public:
    stack<int> STK;
    map<int,int,greater<int>> MP;
    
    FreqStack() {}
    
    void push(int x) {
        MP[x]++;
        STK.push(x);
    }
    
    int pop() {
        int freqValue=0, idx=0;
        priority_queue<int> PQ;
        for(auto m: MP) {
            PQ.push(m.second);
        }

        stack<int> tempSTK;
        while(!STK.empty()) {
            int top = STK.top();
            if(MP[top]==PQ.top()) {
                idx=top;
                STK.pop();
                break;
            }
            STK.pop();
            tempSTK.push(top);
        }
        
        MP[idx]--;
        if(MP[idx]==0) MP.erase(idx);
        
        while(!tempSTK.empty()) {
            STK.push(tempSTK.top());
            tempSTK.pop();
        }
        return idx;
    }
};

int main() {
    
    FreqStack* obj = new FreqStack();
    obj->push(5);
    obj->push(7);
    obj->push(5);
    obj->push(7);
    obj->push(4);
    obj->push(5);
    obj->pop();
    obj->pop();
    obj->pop();
    obj->pop();
    
    return 0;
}
#endif
