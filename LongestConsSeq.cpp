#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    unordered_set<int> st;
    for(int i=0;i<n;i++){
        st.insert(arr[i]);
    }
    int ans = INT_MIN;
    for(int i=0;i<n;i++){
        if(st.find(arr[i]-1) != st.end()) continue;
        else{
            int temp = arr[i];
            int ct =0;
            while(st.find(temp) != st.end()){
                ct++;
                temp++;
                ans = max(ans,ct);
            }
        }
        
    }
    return ans;
}