int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        
        long long res=a[0];
        int count=0,taken=0;
        for(int i=0;i<n;i++){
            if(a[i]<k){
                res=a[i];
                taken=i;
                count=1;
                break;
            }
            if(i==n-1){
                return 0;
            }
        }
        for(int i=taken+1;i<n;i++){
            if(a[i]<k){
                count++;
                if(res==-1){
                    res=a[i];
                    taken=i;
                    continue;
                }
            }else{
                res=-1;
                continue;
            }
            if(res*a[i]<k && taken<i && res!=-1){
                count+=(i-taken);
                res=res*a[i];
            }else if(res*a[i]>=k && res!=-1){
                res=res*a[i];
                while(res>k && taken<i){
                    res=(res)/a[taken];
                    taken++;
                }
                if(res<k){
                    count+=(i-taken);
                    
                }else{
                    res=-1;
                }
            }
        }
        return count;
    }
