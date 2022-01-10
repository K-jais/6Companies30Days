vector<int> serialize(Node *root) 
    {
        vector<int> a;
        serial(root,a);
        return a;
    }
    void serial(Node *root,vector<int> &a){
        if(root==NULL){
            a.push_back(-1);
            return;
        }
        a.push_back(root->data);
        serial(root->left,a);
        serial(root->right,a);
    }
    //Function to deserialize a list and construct the tree.
    int index=0;
    Node * deSerialize(vector<int> &a)
    {
       if(index==a.size())
       return NULL;
       int val=a[index];
       index++;
       if(val==-1)
       return NULL;
       Node *temp=new Node(val);
       temp->left=deSerialize(a);
       temp->right=deSerialize(a);
       return temp;
    }
