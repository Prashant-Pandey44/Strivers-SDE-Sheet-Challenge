#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  int i =1;
  vector<vector<long long int>> ans;
  while(i <= n){
    vector<long long int> temp(i,0);
    for(int j = 0;j<i;j++){
      if(j== 0 || j == i-1){
        temp[j] = 1;
      }
      else{
        temp[j] = ans[i-2][j] + ans[i-2][j-1];
      }
    }
    ans.push_back(temp);
    for(int j = 0;j<i;j++) temp[j] =0;
    i++;
  }
  return ans;
}


int main(){
    printPascal(5);
    return 0;
}