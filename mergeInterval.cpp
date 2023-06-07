#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    if(intervals.size() == 0) return ans;
    sort(intervals.begin(),intervals.end(), [](vector<int> &a, vector<int> &b){
        return a[0] < b[0];
    });
   
    vector<int> temp= intervals[0];
    for(int i=1;i<intervals.size();i++){
        if(temp[1] < intervals[i][0]){
            ans.push_back(temp);
            temp = intervals[i];
        }else{
            temp[1] = max(temp[1], intervals[i][1]);
        }
    }
    ans.push_back(temp);
    return ans;
    
}


int main(){
    vector<vector<int>> intervals = {{1,4},{3,5},{6,8},{8,9},{9,12}};
    mergeIntervals(intervals);
    return 0;
}