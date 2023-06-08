#include <bits/stdc++.h>
#define ll long long
const int N = 1e5+10; 
long long bit[N];

int sum(int i){
    long long ans = 0;
    for(;i>0;i -= (i & -i)){
        ans += bit[i];
    }
    return ans;
}

void update(int i, int x){
    for(;i<N;i += (i&-i)){
        bit[i] += x;
    }
}



long long getInversions(long long *a, int n){
    map<long long,int> mp;
	for(int i = 0;i < n; ++i){
		mp[a[i]];
	}


	// compression of numbers for the case where a[i] > 10 ^ 6
	int ptr = 1;
	for(auto &pr : mp){
		pr.second = ptr++;
	}

	for(int i = 0; i < n; ++i){
		a[i] = mp[a[i]];
	}

	// Finding Inversion count


	int inversion_ct = 0;
	for(int i = 0; i< n; ++i){
		inversion_ct += (sum(N-5) - sum(a[i]));
		update(a[i], 1);
	}
    return inversion_ct;
}