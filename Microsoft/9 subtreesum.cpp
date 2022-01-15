int countSubtree(Node *root,int X,int &res){
    if(root==NULL)
	return 0;
	int lh=countSubtree(root->left,X,res);
	if(lh==X && root->left!=NULL){
	    res++;
	}
	
	int rh=countSubtree(root->right,X,res);
	if(rh==X && root->right!=NULL){
	    res++;
	}
	
	return root->data+lh+rh;
} 
int countSubtreesWithSumX(Node* root, int X)
{
    int res=0;
    if(root==NULL)
    return 0;
	int a=countSubtree(root,X,res);
	if(a==X)
	res++;
	return res;
}
