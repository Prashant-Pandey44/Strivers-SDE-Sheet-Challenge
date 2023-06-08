#include <bits/stdc++.h>

int powerF(int a, int b, int m){
	a = a%m;
	int ans =1;
	while(b){
		if(b & 1){
			ans = (ans *1LL* a)%m;
		}
		a = (a *1LL* a)%m;
		b >>=1;
	}
	return ans%m;
}

int modularExponentiation(int x, int n, int m) {
	return powerF(x,n,m);
}