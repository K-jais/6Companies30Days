int raja(Node* node){
       int x,y,sum=0;
       if(node){
           x=raja(node->left);
           y=raja(node->right);
           sum=node->data+x+y;
           node->data=x+y;
           return sum;
       }
       return 0;
   }
   void toSumTree(Node *node)
   {
       raja(node);
   }
