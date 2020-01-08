//
//  WordPattern.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/08.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: WordPattern 문제풀이

#if 0
#include <string>
#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> s;
        string temp = "";
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == ' ')
            {
                s.push_back(temp);
                temp = "";
            }
            else temp = temp + str[i];
        }
        s.push_back(temp);
        
        // 만약 패턴 길이와 s벡터의 크기가 일치하지 않는다면 false 반환
        if(s.size() != pattern.length()) return false;
        
        map<char, string> m;
        
        // 패턴을 순회하면서 패턴 유무를 확인한다.
        for(int i=0; i<pattern.size(); i++)
        {
            // 만약 pattern[i]가 맵 m에 존재하지 않는다면, m을 순회하면서 해당 패턴이 존재하나 확인
            if(m.find(pattern[i]) == m.end())
            {
                // 해당 패턴이 존재하지 않으면 해당 위치의 패턴값이 들어가있으면 안된다. 그러므로 해당 패턴 대응값이 존재하면 false를 반환한다.
                for(auto iter=m.begin(); iter!=m.end(); iter++)
                {
                    if(iter->second == s[i]) return false;
                }
                // m 순환 간 패턴 대응값이 없으면 현재의 s[i]값을 pattern[i]값과 대응하여 m에 넣어준다.
                m[pattern[i]] = s[i];
            }
            else
            {
                // 만약 값이 존재한다면, 현재 m 내에서 해당 pattern[i], s[i] 대응값이 있는지 확인, 없으면 false를 반환한다.
                for(auto iter=m.begin(); iter!=m.end(); iter++)
                {
                    if(iter->first == pattern[i] && iter->second != s[i]) return false;
                }
                // pattern[i] 키가 존재했을 경우, 현재 키(pattern[i])에 대한 대응값(s[i])이 존재하므로 별로의 값 갱신은 필요없다.
            }
        }
        
        return true;
    }
};
#endif
