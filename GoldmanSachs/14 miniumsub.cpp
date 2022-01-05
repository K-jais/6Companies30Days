int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        int sum=0,min=INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(sum>=target){
                if(min>(i+1))
                    min=i+1;
            }
            auto it=mp.lower_bound(sum-target);
            if(mp.find(sum-target)!=mp.end()){
                if(min>(i-mp[sum-target])){
                    min=i-mp[sum-target];
                }
            }else if(it!=mp.begin() && it!=mp.end()){
                it=it--;
                if(min>(i - (it->second))){
                    min=i - (it->second)+1;
                }
            }            
            
            mp[sum]=i;
        }
        if(min==INT_MAX)
            return 0;
        else
            return min;
    }
