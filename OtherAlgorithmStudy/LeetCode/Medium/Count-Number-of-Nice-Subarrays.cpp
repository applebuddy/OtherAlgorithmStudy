//
//  Count-Number-of-Nice-Subarrays.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 2020/02/20.
//  Copyright © 2020 Min Kyeong Tae. All rights reserved.
//

#if 0
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int odd = 0, temp = 0, Ans=0;
        for(auto &v: nums) if(v%2==1) odd++;
        if(odd==k) Ans++;
        
        temp = odd;
        for(int i=nums.size()-1; i>=1; i--) {
            if(nums[i]%2==1) temp--;
            if(temp==k) {
                Ans++;
            }
            
        }
        
        temp = odd;
        int i=0, j=nums.size()-1;
        while(i<nums.size()) {
            j=nums.size()-1;
            
            if(nums[i]%2==1) temp=odd-1;
            else temp = odd;
            if(temp==k) {
                Ans++;
            } else if(temp < k) break;
            int ttemp = temp;
            while(j>i) {
                if(nums[j]%2==1) ttemp--;
                if(ttemp==k) {
                    Ans++;
                } else if(ttemp<k) break;
                j--;
            }
            
            odd = temp;
            i++;
        }
        
        return Ans;
    }
};
#endif
