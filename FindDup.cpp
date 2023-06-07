#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	vector<int> vis(n,0);
	for(int i=0;i<n;i++){
		if(!vis[arr[i]]){
			vis[arr[i]] = 1;
		}else{
			return arr[i];
		}
	}
}
