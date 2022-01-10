string colName (long long int n)
    {
        string s="";
        while(n>0){
            int a=n%26;
            if(a==0){
                s+="Z";
            }else{
                s+=char(a+64);
            }
            n=(n-1)/26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
