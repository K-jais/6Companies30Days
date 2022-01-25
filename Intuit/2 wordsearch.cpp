bool isWordExist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        int k=word.length();
        int l=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                l=0;
                if(board[i][j]==word[l] && k==1){
                    return true;
                }
                if(board[i][j]==word[l]){
                    char c=board[i][j];
                    board[i][j]='0';
                    l++;
                    if(DFS(board,word,i+1,j,m,n,k,l)){
                        return true;
                    }
                    l=0;
                    l++;
                    if(DFS(board,word,i-1,j,m,n,k,l)){
                        return true;
                    }
                    l=0;
                    l++;
                    if(DFS(board,word,i,j+1,m,n,k,l)){
                        return true;
                    }
                    l=0;
                    l++;
                    if(DFS(board,word,i,j-1,m,n,k,l)){
                        return true;
                    }
                    board[i][j]=c;
                }
            }
        }
        return false;
    }
    bool DFS(vector<vector<char>>& board,string &word,int i,int j,int m,int n,int k,int &l){
        if(i<0 || j<0 || i>=m || j>=n || l<0 || l>=k || board[i][j]!=word[l] || board[i][j]=='0'){
            return false;
        }else if(l==k-1 && board[i][j]==word[l]){
            return true;
        }
        else if(board[i][j]==word[l]){
            char c=board[i][j];
            board[i][j]='0';
            int h=l;
            l++;
            if(DFS(board,word,i+1,j,m,n,k,l)){
                return true;
            }
            
            l=h;
            l++;
            if(DFS(board,word,i-1,j,m,n,k,l)){
                return true;
            }
            l=h;
            l++;
            if(DFS(board,word,i,j+1,m,n,k,l)){
                return true;
            }
            l=h;
            l++;
            if(DFS(board,word,i,j-1,m,n,k,l)){
                return true;
            }
            board[i][j]=c;
        }
        return false;
    }
