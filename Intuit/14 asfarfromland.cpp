int maxDistance(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int maxi=0,totalland=0,totalwater=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    totalwater++;
                }else{
                    totalland++;
                }
            }
        }
        if(totalwater==0 || totalland==0){
            return -1;
        }
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    q.push(make_pair(make_pair(i,j),0));
                }
            }
        }
        while(!q.empty()){
            pair<pair<int,int>,int> p=q.front();
            q.pop();
            int x=p.first.first;
            int y=p.first.second;
            maxi=max(maxi,p.second);
            int dx[]={-1,0,1,0};
            int dy[]={0,-1,0,1};
            for(int i=0;i<4;i++){
                int requiredx=x+dx[i];
                int requiredy=y+dy[i];
                if(requiredx<0 || requiredy<0 || requiredx>=m || requiredy>=n || grid[requiredx][requiredy]==1){
                    continue;
                }else if(grid[requiredx][requiredy]==0){
                    grid[requiredx][requiredy]=1;
                    q.push(make_pair(make_pair(requiredx,requiredy),p.second+1));
                }
            }
        }
        
        return maxi;
    }
