int atoi(string str) {
        int res=0;
        int i=0,f=0;
        int n=str.size();
        if(str[i]=='-'){
            f=1;
            i++;
        }
        
        while(i<n){
            if(isdigit(str[i])){
                res=res*10+(str[i]-'0');
                i++;
            }
            else
                return -1;
        }
        
        return f==0? res:-res;
    }
