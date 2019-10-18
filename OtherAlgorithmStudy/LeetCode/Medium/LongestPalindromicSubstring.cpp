//
//  LongestPalindromicSubstring.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 18/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - 가장 긴 펠린드롬 부분 문자열 문제 : Manacher's Algorithm Problem

#include <iostream>
#include <vector>
using namespace std;

vector<int> A(2001,0);
class LongestPalindromicSubstring {
public:

    /// MARK: manacherAlgorithm
    string manacherAlgorithm(string S) {
        
        int r=0,p=0;
        int sum=0,mxIdx=0;
        string Ans = "";
        for(int i=0; i<S.length(); i++) {
            if(i <= r) A[i] = min(A[2*p-i],r-i);
            else A[i] = 0;
            
            /// 펠린드롬 문자열 여지가 있는 인덱스를 기준으로 펠린드롬 가능 범위를 지정한다.
            while(i-A[i]-1 >= 0 && i+A[i]+1 <S.length() && S[i-A[i]-1]==S[i+A[i]+1]) A[i]++;
            
            /// 이미 식별된 펠린드롬 문자열 범위는 다시 탐색할 필요가 없으므로 건너 뛴다.
            if(r < i+A[i]) {
                r = i+A[i];
                p = i;
            }
            if(sum < A[i]) {
                sum = A[i];
                mxIdx = i;
            }
        }

        for(int i=max(mxIdx-A[mxIdx],0); i<min(mxIdx+A[mxIdx],(int)S.length()-1); i++) {
            Ans += S[i];
        }

        return Ans;
    }
    
    string longestPalindrome(string s) {
        
        // "bb" 같은 짝수 개의 펠린드롬 부분문자열까지 식별하기 위해 문자열 사이에 '@' 문자를 임의로 끼워서 manacher's Algorithm을 수행한다.
        string S = "@";
        for(int i=0; i<s.length(); i++) {
            S+=s[i];
            S+='@';
        }

        string ANS = manacherAlgorithm(S);
        string Ans = "";
        
        /// '@' 문자를 제외한 가장 긴 펠린드롬 부분문자열을 반환한다.
        for(auto s: ANS) {
            if(s!='@') Ans+=s;
        }
        return Ans;
    }
};
