#include <bits/stdc++.h> 
using namespace std;


long getTrappedWater(long *arr, int n){
    long ans =0;
    // vector<pair<long,long>> temp;
    vector<long> from_back(n,0);
    vector<long> from_front(n,0);
    // long temp = 0;
    from_back[0]  = 0;
    from_front[n-1] = 0;
    for(int i= 1;i<n;i++){
        if(max(from_back[i-1], arr[i-1]) > arr[i])
            from_back[i] = max(from_back[i-1], arr[i-1]);
    }
    for(int i= n-2;i>=0;i--){
        if(max(from_front[i+1], arr[i+1]) > arr[i])
            from_front[i] = max(from_front[i+1], arr[i+1]);
    }
    from_back[0]  =0;
    from_front[n-1] = 0;
    for(int i =1;i<n-1;i++){
        if(min(from_back[i],from_front[i])){
            long temp = (min(from_back[i],from_front[i]) - arr[i]);
            ans += temp;
        }
    }
    return ans;
}

int  main(){
    long arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<getTrappedWater(arr,12);
    return 0;
}