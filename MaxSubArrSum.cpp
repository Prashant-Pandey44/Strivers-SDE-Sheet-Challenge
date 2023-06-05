#include <bits/stdc++.h> 
using namespace std;
#define ll long long
long long maxSubarraySum(int arr[], int n)
{
    ll ans =0,temp=0;
    for(int i=0;i<n;i++){
        temp += arr[i];
        ans = max(ans,temp);
        if(temp <= 0){
            temp = 0;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1,2,-5,3,9};
    cout<<maxSubarraySum(arr,5);
    return 0;
}