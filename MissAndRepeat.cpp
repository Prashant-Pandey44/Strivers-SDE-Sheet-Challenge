#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	pair<int,int> ans={0,0};
	vector<int> vis(n+1,0);
	for(int i=0;i<n;i++){
		if(!vis[arr[i]]){
			vis[arr[i]] = 1;
		}else{
			ans.second = arr[i];
		}
	} 
	for(int i=1;i<n+1;i++){
		if(!vis[i]){
			ans.first = i;
		}
	}
	return ans;
	
}
