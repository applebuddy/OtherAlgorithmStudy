//
//  InsertionSort.cpp
//  BackJoonPractice
//
//  Created by Min Kyeong Tae on 11/06/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <stdio.h>

// 선택정렬 : 이미 정렬이 되어있는 경우에는 빠르게 정렬시킬 수 있다.
void insertionSort(int *a, int len){
    int j;
    for(int i=1; i<len; i++){
        int temp=a[i];
        for(j=i; j>0; j--){
            if(a[j-1]>temp){
                a[j]=a[j-1];
            }else{
                break;
            }
        }
        a[j]=temp;
    }
}

int main(){
    int a[] = {8,9,7,5,4,3,6,2,1,0};
    insertionSort(a,10);
    for(int i=0; i<10; i++){
        printf("%d ",a[i]);
    }
}
