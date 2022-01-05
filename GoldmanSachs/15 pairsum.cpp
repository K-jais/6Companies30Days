bool canPair(vector<int> nums, int k) {
        int n=nums.size();
        if(n==1)
        return false;
        if(n%2!=0)
        return false;
        vector<int> v(k,0);
        for(int i=0;i<n;i++){
            v[nums[i]%k]++;
        }
        int i=1,j=k-1;
        int pairs=0;
        while(i<j){
            pairs+=min(v[i],v[j]);
            v[i]=0;
            v[j]=0;
            i++;
            j--;
        }
        if(k/2!=0)
        pairs+=(v[k/2])/2+v[0]/2;
        else
        pairs+=v[0]/2;
        if(pairs==n/2)
        return true;
        else
        return false;
    }
