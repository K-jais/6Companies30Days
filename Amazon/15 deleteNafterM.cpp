void linkdelete(struct Node  *head, int m, int n)
    {
        struct Node *p=head;
        int res=0;
        int k=n;
        struct Node *temp=NULL;
        while(p!=NULL){
            if(res==m){
                while(p!=NULL && k!=0){
                    p=p->next;
                    k--;
                }
                temp->next=p;
                if(p==NULL)
                break;
                res=0;
                k=n;
            }
            temp=p;
            p=p->next;
            res++;
        }
        return;
    }
