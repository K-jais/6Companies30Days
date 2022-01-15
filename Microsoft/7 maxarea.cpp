int findMaxArea(vector<vector<int>>& grid) {
        int maxi=0,maxans=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    grid[i][j]=0;
                    maxi++;
                    DFS(grid, i + 1, j, n, m,maxi);     //right side traversal
                    DFS(grid, i - 1, j, n, m,maxi);     //left side traversal
                    DFS(grid, i, j + 1, n, m,maxi);     //upward side traversal
                    DFS(grid, i, j - 1, n, m,maxi);     //downward side traversal
                    DFS(grid, i + 1, j + 1, n, m,maxi); //upward-right side traversal
                    DFS(grid, i - 1, j - 1, n, m,maxi); //downward-left side traversal
                    DFS(grid, i + 1, j - 1, n, m,maxi); //downward-right side traversal
                    DFS(grid, i - 1, j + 1, n, m,maxi); //upward-left side traversal
                }
                maxans=max(maxi,maxans);
                maxi=0;
            }
        }
        return maxans;
    }
    void DFS(vector<vector<int>>& grid,int i,int j,int n,int m,int &maxi){
        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0)
        return;
        else if(grid[i][j]==1){
            maxi++;
            grid[i][j]=0;
            DFS(grid, i + 1, j, n, m,maxi);     //right side traversal
            DFS(grid, i - 1, j, n, m,maxi);     //left side traversal
            DFS(grid, i, j + 1, n, m,maxi);     //upward side traversal
            DFS(grid, i, j - 1, n, m,maxi);     //downward side traversal
            DFS(grid, i + 1, j + 1, n, m,maxi); //upward-right side traversal
            DFS(grid, i - 1, j - 1, n, m,maxi); //downward-left side traversal
            DFS(grid, i + 1, j - 1, n, m,maxi); //downward-right side traversal   
            DFS(grid, i - 1, j + 1, n, m,maxi); //upward-left side traversal
        }
    }
