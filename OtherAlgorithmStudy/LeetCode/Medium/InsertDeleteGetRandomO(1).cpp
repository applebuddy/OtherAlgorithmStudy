//
//  InsertDeleteGetRandomO(1).cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
#include <iostream>
#include <string>
#include <map>
using namespace std;

class RandomizedSet {
public:
    
    unordered_map<int,int> MP;
    /** Initialize your data structure here. */
    RandomizedSet() {
        MP = unordered_map<int,int>();
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(MP[val] == 0)
        {
            MP[val] = 1;
            return true;
        }
        else return false;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
         return MP.erase(val);
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        unordered_map<int,int>::iterator iter = MP.begin();
        
        return iter->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
#endif
