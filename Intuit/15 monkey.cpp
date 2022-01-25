int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(mini>piles[i]){
                mini=piles[i];
            }
            if(maxi<piles[i]){
                maxi=piles[i];
            }
        }
        int l=1,r=maxi,minians=maxi;
        while(l<=r){
           int mid=l+(r-l)/2;
            if(check(piles,mid,h)){
                r=mid-1;
                minians=min(minians,mid);
            }else{
                l=mid+1;
            }
        }
        return minians;
    }
    bool check(vector<int> piles, int mid,int h){
        int sum=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%mid==0){
                sum+=piles[i]/mid;
            }else{
                sum+=(piles[i]/mid)+1;
            }
            
        }
        if(sum<=h){
            return true;
        }else{
            return false;
        }
    }
