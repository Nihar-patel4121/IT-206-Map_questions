#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            unordered_map<int, int> m;
            vector<int> ans;
    
            for (int i = 0; i < nums.size(); i++) { 
                int first = nums[i];
                int sec = target - first;
    
                if (m.find(sec) != m.end()) {
                    ans.push_back(m[sec]);  
                    ans.push_back(i);       
                    return ans;             
                }
    
                m[first] = i; 
            }
    
            return ans; 
        }
    };
    