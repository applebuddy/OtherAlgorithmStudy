//
//  KthLargestElementinaStream.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/16.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//
// MARK: KthLargestElementInAStream

// MARK: - 이진탐색 사용 통과답안
#if 0
#include <vector>
#include <algorithm>
using namespace std;

class KthLargest {
private:
    vector<int> V;
    int K = 0;
    
public:
    KthLargest(int k, vector<int>& nums) {
        V = nums;
        sort(V.begin(), V.end(), greater<int>()); // 내림차순 정렬
        K = k;
    }
    
    int add(int val) {
        binarySearch(val); // 이진탐색으로 현재 넣을 값의 위치를 구하고 그 위치에 삽입한다.
        return V[K-1]; // 추가 후의 K번째 인덱스의 값을 반환한다.
    }
    
    void binarySearch(int val) {
        // 추가할 값을 어느곳에 넣을 지를 판단하는 이진탐색 과정
        int left=0, right=V.size()-1;
        int mid=0;
        while(left <= right) {
            mid = (left+right)/2;
            
            if(V[mid] > val) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        
        V.insert(V.begin()+left,val);
    }
};
#endif

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */

// MARK: - KthLargestElementInAStream 시간초과답안
#if 0
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

class KthLargest {
private:
    priority_queue<int> PQ;
    int K = 0;
    
public:
    KthLargest(int k, vector<int>& nums) {
        for(int i=0; i<nums.size(); i++) PQ.push(nums[i]);
        K = k;
    }
    
    int add(int val) {
        PQ.push(val);
        priority_queue<int> tempQueue = PQ;
        for(int i=0; i<K-1; i++) {
            tempQueue.pop();
        }
        
        return !tempQueue.empty() ? tempQueue.top() : 0;
    }
};

/**
* Your KthLargest object will be instantiated and called as such:
* KthLargest* obj = new KthLargest(k, nums);
* int param_1 = obj->add(val);
*/
#endif


