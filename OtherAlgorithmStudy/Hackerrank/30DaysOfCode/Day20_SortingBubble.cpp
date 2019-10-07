//
//  Day20_SortingBubble.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 08/10/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Day20_Sorting

#include <iostream>
#include <vector>
using namespace std;

void bubbleSorting() {
    int n,cnt=0;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
        cin >> a[a_i];
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(a[j]>a[j+1]) {
                cnt++;
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Array is sorted in %d swaps.\n",cnt);
    printf("First Element: %d\n",a.front());
    printf("Last Element: %d\n",a.back());
    return;
}

int main() {
    ios_base :: sync_with_stdio(0); cin.tie(0);
    bubbleSorting();
    return 0;
}

