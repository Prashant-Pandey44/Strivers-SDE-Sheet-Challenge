#include <bits/stdc++.h>
using namespace  std;

#include <bits/stdc++.h>




string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-3;i++){
        if(i > 0 && arr[i] == arr[i-1]) continue;
        for(int j=i+1;j<n-2;j++){
            if(j > i+1 && arr[j] == arr[j-1]) continue;
            int l =j+1;
            int h =n-1;
            int temp = target - (arr[i] + arr[j]);
            while(l < h){
                if(arr[l]+arr[h] == temp) return "Yes";
                else if(temp < arr[l]+arr[h]){
                    h--;
                }else{
                    l++;
                }
            }
        }
    }
    return "No";
}



int main(){
    vector<int> ans = {1,3,3,10,2};
    cout<<fourSum(ans,9,5)<<" ";
    return 0;
}