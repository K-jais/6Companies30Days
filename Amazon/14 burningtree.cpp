int minTime(Node* root, int target) 
    {
        map<Node*,Node*> mp;
        map<Node*,bool> a;
        allparent(root,mp,a);
        mp[root]=NULL;
        struct Node* temp=findNode(root,target);
        queue<pair<Node*,int>> q;
        q.push(make_pair(temp,0));
        a[temp]=true;
        int maxi=0;
        while(q.empty()==false){
            pair<Node*,int> p=q.front();
            int tr=p.second;
            Node *tree=p.first;
            q.pop();
            maxi=max(maxi,tr);
            if(tree->left!=NULL && a[tree->left]==false){
                q.push(make_pair(tree->left,tr+1));
                a[tree->left]=true;
            }
            if(tree->right!=NULL && a[tree->right]==false){
                q.push(make_pair(tree->right,tr+1));
                a[tree->right]=true;
            }
            if(mp[tree]!=NULL && a[mp[tree]]==false){
                q.push(make_pair(mp[tree],tr+1));
                a[mp[tree]]=true;
            }
            
        }
        return maxi;
    }
    struct Node* findNode(Node* root,int target){
        if(root==NULL)
        return NULL;
        if(root->data==target)
        return root;
        Node *x=findNode(root->left,target);
        if(x!=NULL){
            return x;
        }
        Node *y=findNode(root->right,target);
        if(y!=NULL){
            return y;
        }
    }
    void allparent(Node *root,map<Node*,Node*>& mp,map<Node*,bool>& a){
        if(root==NULL)
        return;
        a[root]=false;
        if(root->left!=NULL){
            mp[root->left]=root;
            allparent(root->left,mp,a);
        }
        if(root->right!=NULL){
            mp[root->right]=root;
            allparent(root->right,mp,a);
        }
    }
