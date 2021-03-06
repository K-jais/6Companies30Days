void dfs1(vector<int> edges[], vector<bool>& vis, int cur, int c, int d){
        vis[cur]=true;
        for(int child:edges[cur]){
            if(vis[child]||(((cur==c&&child==d)||(cur==d&&child==c)))){
                continue;
            }
            dfs1(edges, vis, child, c, d);
        }
    }
    void dfs(vector<int> edges[], vector<bool>& vis, int cur){
        vis[cur]=true;
        for(int child:edges[cur]){
            if(!vis[child]){
                dfs(edges, vis, child);
            }
        }
    }
	public:
    //Function to find if the given edge is a bridge in graph.
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        vector<bool> vis(V, false);
        int cnt=0;
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs(adj, vis, i);
                cnt++;
            }
            vis[i]=false;
            
        }
        for(int i=0;i<V;i++){
            if(!vis[i]){
                dfs1(adj, vis, i, c, d);
                cnt--;
            }
        }
        return cnt<0?1:0;
    }
