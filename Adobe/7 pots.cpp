int solve(int l,int r,vector<int>& nums,vector<vector<int>>& dp){
        if(l>r)
            return 0;
        if(l==r)
            return nums[l];
        if(dp[l][r]!=-1)
        return dp[l][r];
        int ls=nums[l]+min(solve(l+2,r,nums,dp),solve(l+1,r-1,nums,dp));
        int rs=nums[r]+min(solve(l,r-2,nums,dp),solve(l+1,r-1,nums,dp));
        return dp[l][r]=max(ls,rs);
    }
    
    int maxCoins(vector<int>&nums,int n)
    {
        vector<vector<int>> dp(n,vector<int>(n,-1));
	    int l=0,r=nums.size();
        int s1=solve(l,r-1,nums,dp);
        return s1;
    }
