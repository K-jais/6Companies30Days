void connect(Node *root)
    {
       queue<Node*> q;
        q.push(root);
        while(q.empty()==false){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node *u=q.front();
                q.pop();
                if(i+1==n){
                    u->nextRight=NULL;
                }else{
                    u->nextRight=q.front();
                }
                if(u->left!=NULL)
                q.push(u->left);
                if(u->right!=NULL)
                q.push(u->right);
            }
        }
    }    
