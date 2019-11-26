
//
//  PushDominoes.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2019/11/26.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

// 현재 통과 못함..
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string pushDominoes(string dominoes) {
        bool isRight = false;
        bool isLeft = false;
        bool isDot = false;
        bool isFirst = true;

        int lPos = 0, rPos = 0, dotCount = 0;
        for(int i=0; i<dominoes.length(); i++) {
            // 끝 부분 도미노 처리
            if(isFirst && isDot && dominoes[i]=='L') {
                isFirst = false;
                for(int j=0; j<i; j++) {
                    dominoes[j] = 'L';
                    printf("전체가 칠해져보리기\n%s\n",dominoes.c_str());
                }
                lPos = i;
                isLeft = true;
            }
            
            if(dominoes[i] == '.') {
                // if there is dot
                isDot = true;
                if(i == dominoes.length()-1) {
                    if(isRight == true) {
                        for(int j=rPos+1; j<dominoes.length(); j++) dominoes[j] = 'R';
                        break;
                    }
                }
                dotCount++;
                printf("dotCount is : %d\n",dotCount);
            } else {
                if(dominoes[i] == 'L') {
                    // 만약 카운트가 더 크면,
                    if(dotCount >= 2) {
                        if(isLeft || isFirst) {
                            // Left로 전부 칠한다.
                            for(int j = isFirst ? 0 : lPos+1; j<i; j++) dominoes[j] = 'L';
                            printf("전체가 칠해져보리기\n");
                        } else {
                            if(dotCount % 2 == 0) {
                                // 반반 칠하기
                                for(int j = rPos+1; j<i; j++) {
                                    if(j < rPos+1+(dotCount/2)) dominoes[j] = 'R';
                                    else dominoes[j] = 'L';
                                }
                            } else {
                                // 하나 빼고 칠하기
                                for(int j = rPos+1; j<i; j++) {
                                    if(j < rPos+1+(dotCount/2)) dominoes[j] = 'R';
                                    else if(j != rPos+1+(dotCount/2)) dominoes[j] = 'L';
                                }
                            }
                        }
                    } else {
                        if(isLeft) {
                            // Left로 전부 칠한다.
                            for(int j = isFirst ? 0 : lPos+1; j<i; j++) dominoes[j] = 'L';
                        }
                    }
                    lPos = i;
                    isLeft = true;
                    isRight = false;
                }
                else {
                    // R에 도달했을 때
                    if(dotCount >= 2) {
                        if(isRight) {
                            // Right로 전부 칠한다.
                            for(int j = rPos+1; j<i; j++) dominoes[j] = 'R';
                        } else {
                            if(isLeft) {
                                if(dotCount % 2 == 0) {
                                    // 반반 칠하기
                                    for(int j = rPos+1; j<i; j++) {
                                        if(j < rPos+1+(dotCount/2)) dominoes[j] = 'L';
                                        else dominoes[j] = 'R';
                                    }
                                } else {
                                    // 하나 빼고 칠하기
                                    for(int j = rPos+1; j<i; j++) {
                                        if(j < rPos+1+(dotCount/2)) dominoes[j] = 'L';
                                        else if(j != rPos+1+(dotCount/2)) dominoes[j] = 'R';
                                    }
                                }
                            }
                        }
                    } else {
                        if(isRight) {
                            // Right로 전부 칠한다.
                            for(int j = rPos+1; j<i; j++) dominoes[j] = 'R';
                        }
                    }
                    
                    rPos = i;
                    isLeft = false;
                    isRight = true;
                }

                dotCount = 0;
                isFirst = false;
                printf("%s\n",dominoes.c_str());
            }
            
            
        }
        return dominoes;
     }
};
