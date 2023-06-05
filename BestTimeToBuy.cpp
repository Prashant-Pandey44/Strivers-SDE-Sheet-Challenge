#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int sz= prices.size();
    vector<int> MinTillNow(sz,INT_MAX);
    int temp = INT_MAX;
    for(int i=0;i<sz;i++){
        MinTillNow[i] = min(temp,prices[i]);
        temp = min(temp,prices[i]);
    }
    int ans = INT_MIN;
    for(int i=0;i<sz;i++){
        ans = max(ans,prices[i] - MinTillNow[i]);
    }
    return ans;
}