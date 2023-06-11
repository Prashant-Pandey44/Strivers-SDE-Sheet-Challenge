int removeDuplicates(vector<int> &arr, int n) {
	int i=0,ans=0;
	while(i <n){
		i++;
		ans++;
		while(i < n && arr[i] == arr[i+1]) i++;
	}
	return arr[0] == arr[1] ? ans-1 : ans;
}