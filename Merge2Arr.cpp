#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int k=0,j=0;
	vector<int> ans;
	while(k<m && j <n){
		if(arr1[k] < arr2[j] && arr1[k] && arr2[j]){
			ans.push_back(arr1[k]);
			k++;
		}else{
			ans.push_back(arr2[j]);
			j++;
		}
	}
	if(k == m){
		while(j < n){
			if(arr2[j]) ans.push_back(arr2[j]);
			j++;
		}
	}else{
		while(k < m ){
			if(arr1[k]) ans.push_back(arr1[k]);
			k++;
		}
	}
	return ans;
}