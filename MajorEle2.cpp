#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> ans;
    map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        mp[arr[i]]++;
    }
    for(auto &it: mp){
        if(it.second > arr.size()/3) ans.push_back(it.first);
    }
    return ans;
}