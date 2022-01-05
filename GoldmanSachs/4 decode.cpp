string encode(string src)
{     
    int n=src.length();
    string s="";
    int res=1;
    if(n==1){
        s+=src[0]+to_string(res);
        return s;
    }
    for(int i=0;i<n-1;i++){
        if(src[i]==src[i+1]){
            res++;
            if((i+1)==n-1){
                s+=src[i]+to_string(res);
            }
        }else{
            s+=src[i]+to_string(res);
            res=1;
        }
    }
    if(src[n-1]!=src[n-2]){
        s+=src[n-1]+to_string(res);
    }
    return s;
}     
