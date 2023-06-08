#include <bits/stdc++.h> 

int dp[20][20];

int solve(int i, int j, int &m, int &n){
	if( i == m-1 && j == n-1 ){
		return 1;
	}
	if(dp[i][j] != -1) return dp[i][j];
	int ans = 0;
	if(i+1 < m){
		ans +=  solve(i+1,j,m,n);
	}
	if(j+1 < n){
		ans +=  solve(i,j+1,m,n);
	}
	return dp[i][j] = ans;
}
int uniquePaths(int m, int n) {
	memset(dp,-1,sizeof(dp));
	int ans = 0;
	return solve(0,0,m,n);
}