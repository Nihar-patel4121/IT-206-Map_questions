#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int longestConsecutive(vector<int>& arr) {
            int n=arr.size();
            if(n==0) return 0;
            unordered_set<int> st;
            int longest=1;
    
            for(int i=0;i<n;i++){
                st.insert(arr[i]);
            }
            int max_count=0;
    
            for(auto it:st){
             if(st.find(it-1)==st.end()){
                int currentNum=it;
                int count=1;
    
                while(st.find(currentNum+1)!=st.end()){
                    currentNum++;
                    count++;
                }
                max_count=max(max_count,count);
             }
            }
            return max_count;
    
        }
    };