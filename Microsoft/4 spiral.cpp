vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> a;
        int k;
        if(r%2==0){
            k=(r/2)-1;
        }else{
            k=(r/2);
        }
        int l=0;
        for(int i=0;i<=k;i++){
            l=0;
            for(int j=i;j<c-i;j++){
                a.push_back(matrix[i][j]);
                l=1;    
            }
            if(l!=1){
                break;
            }
            l=0;
                for(int j=i+1;j<r-i;j++){
                    a.push_back(matrix[j][c-i-1]);
                    l=1;
                }
            if(l!=1){
                break;
            }
            l=0;
            if(r-i-1!=i){
                for(int j=c-i-2;j>=i;j--){
                    a.push_back(matrix[r-i-1][j]);
                   l=1; 
                }
            }
            if(l!=1){
                break;
            }
            l=0;
            for(int j=r-i-2;j>=i+1;j--){
                a.push_back(matrix[j][i]);
                l=1;
            }
            if(l!=1){
                break;
            }
        }
        
        return a;
    }
