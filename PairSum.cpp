#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s){
   vector<int> temp;
   vector<vector<int>> ans;
   for(int i=0;i<arr.size();i++){
      for(int j=i+1;j<arr.size();j++){
         if(arr[i]+arr[j] == s){
            temp.push_back(arr[i]);
            temp.push_back(arr[j]);
            sort(temp.begin(),temp.end());
            ans.push_back(temp);
            temp.clear();
         }
      }
   }
   sort(ans.begin(),ans.end());
   return ans;
}