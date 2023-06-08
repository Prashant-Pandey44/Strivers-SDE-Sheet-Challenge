bool searchMatrix(vector<vector<int>>& mat, int target) {
    int n= mat.size();
    int m= mat[0].size();
    for(int i=0;i<n;i++){
        if(i < n-1 && mat[i+1][0] < target) continue;
        for(int j=0;j<m;j++){
            if(mat[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}