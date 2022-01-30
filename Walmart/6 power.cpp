long long int m=1000000007;
    long long power(long long int x,long long int n)
    {
        long long int res=1;
       while(n>0){
           if(n%2!=0){
              res=(res*x)%m;}
              x=(x*x)%m;
           
           n=n/2;
       }
       return res;
        
    }
