//
//  getMedian.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 24/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

/// MARK: - Fraudulent Activity Notifications : Sorting Problem
/// MARK: ✭ xx정렬(xxx정렬) 문제

#include <vector>
#include <algorithm>
using namespace std;

vector<int> cv(201,0);

double getMedian(int range) {
    int sum=0;
    double median=0;
    if(range%2!=0) {
        for(int i=0; i<cv.size(); i++) {
            sum += cv[i];
            if(sum > range/2) {
                median = i;
                break;
            }
        }
    }
    else {
        int first=0;
        int second=0;
        for(int i=0; i<cv.size(); i++) {
            sum += cv[i];
            if(first==0 && sum > range/2-1) {
                first = i;
            }
            if(second==0 && sum > range/2) {
                second = i;
                break;
            }
        }
        
        median = (first+second)/2.0;
    }
    return median;
}

int activityNotifications(vector<int> expenditure, int d) {
    int Ans = 0;
    for(int i=0; i<d; i++) {
        cv[expenditure[i]]++;
    }
    for(int i=d; i<expenditure.size(); i++) {
        double median = getMedian(d);
        if(median*2 <= expenditure[i]) Ans++;

        cv[expenditure[i-d]]--;
        cv[expenditure[i]]++;
    }
    return Ans;
}

int main() {
    double fuck = activityNotifications({10, 20, 30, 40, 50},3);
    printf("%lf\n",fuck);
    return 0;
}
