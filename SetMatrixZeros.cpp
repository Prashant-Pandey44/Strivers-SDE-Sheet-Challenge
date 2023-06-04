#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
	int n = matrix.size();
	int m = matrix[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				for(int x =0;x<m;x++){
					if(matrix[i][x])  matrix[i][x] = -1; 
				}
				for(int x =0;x<n;x++){
					if(matrix[x][j]) matrix[x][j] = -1;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == -1){
				matrix[i][j] =0;
			}
		}
	}
}

int main(){
    vector<vector<int>> v = {{7,19,3},{4,21,0}};
    setZeros(v);
    return 0;
}