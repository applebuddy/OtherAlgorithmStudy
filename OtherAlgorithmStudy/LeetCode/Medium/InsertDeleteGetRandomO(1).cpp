//
//  InsertDeleteGetRandomO(1).cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/01/10.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

// MARK: InsertDeleteGetRandomO(1) 문제풀이

#if 0
class RandomizedSet {
    
private:
    map<int, int> MP;
    vector<int> V;
    
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }

    bool insert(int val) {
        if(MP.count(val)) // 이미 val 값이 map에 존재하면 false를 출력한다.
            return false;
        V.push_back(val); // val 값이 map에 존재하지 않는다면 벡터에 값을 넣고,
        MP[val] = V.size()-1; // 현 벡터의 최대 계수값를 MP[val]에 넣고,
        return true; // true를 출력한다.
    }
    
    bool remove(int val) { // 지워야 할 val값을 받는다.
        if(!MP.count(val)) // map에 val값이 존재하지 않는다면,
            return false; // 지울게 존재하지 않으므로 false를 반환한다.
        int last = V.back(); // 벡터/map의 마지막 값과 현재 보는 val값의 위치를 스왑한다. (O(1))
        swap(V[MP[val]],V[MP[last]]); // MP의 가장 최근 넣은 값을 현재 제거해야할 값으로 변경한다. 이때 변경할 인덱스는 맵을 참고한다.
        swap(MP[last], MP[val]); // V를 변경했으므로, 이에 맞게 맵의 인덱스 정보도 변경한다. 그래야 맵에서 val값을 제거할때 올바른 val의 위치값을 함께 제거할 수 있다.
        MP.erase(val); // MP에 존재하는 val 키값을 제거한다.
        V.pop_back(); // 벡터의 맨끝 값도 현재의 val값이므로 제거한 뒤 true를 반환한다.
        return true;
        
    }
    
    int getRandom() {
        int n = V.size(); // 현재까지 존재하는 벡터의 값 크기가 곧 현재 랜덤으로 나올 수 있는 값의 갯수이다.
        int random = rand() % n; // 0 ~ n-1로 랜덤값을 뽑아 해당 값으로 map에 접근하여 그 값을 반환한다.
        return V[random];
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
