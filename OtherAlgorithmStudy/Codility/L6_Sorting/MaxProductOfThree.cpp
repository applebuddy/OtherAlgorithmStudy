//
//  MaxProductOfThree.cpp
//  OtherAlgorithmStudy
//
//  Created by MinKyeongTae on 15/09/2019.
//  Copyright © 2019 Min Kyeong Tae. All rights reserved.
//

#include <iostream>
#include <map>

using namespace std;

void sod()
{
    std::map<double, std::string, greater<int>> sorted_map;
    // Sort the names of the planets according to their size
    sorted_map.insert(std::make_pair(0.3829, "Mercury"));
    sorted_map.insert(std::make_pair(0.9499, "Venus"));
    sorted_map.insert(std::make_pair(1,      "Earth"));
    sorted_map.insert(std::make_pair(0.532,  "Mars"));
    sorted_map.insert(std::make_pair(10.97,  "Jupiter"));
    sorted_map.insert(std::make_pair(9.14,   "Saturn"));
    sorted_map.insert(std::make_pair(3.981,  "Uranus"));
    sorted_map.insert(std::make_pair(3.865,  "Neptune"));
    
    for (auto const& entry: sorted_map)
    {
        std::cout << entry.second << " (" << entry.first << " of Earth's radius)" << '\n';
    }
}

//#include <algorithm>
//#include <vector>
//#include <cmath>
//
//using namespace std;
//
//int maxProductOfThree(vector<int> &A) {
//    sort(A.begin(),A.end());
//    return max(A[0]*A[1]*A[A.size()-1], A[A.size()-3]*A[A.size()-2]*A[A.size()-1]);
//}
