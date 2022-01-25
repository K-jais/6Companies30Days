class Solution {
public:
int ms=INT_MAX;
int dp[52][1002];
int solve(vector&a,int m,int i,int j){

    if(m==0){
        return a[j+1]-a[i];
    }
    if(dp[m][j-i]!=-1){
        if(i==0 && j==a.size()-2){
        ms=min(ms,dp[m][j-i]);
    }
        return dp[m][j-i];
    }
    int ans=0,t=INT_MAX;
    for(int k=i;k<j;k++){
        ans=max(solve(a,0,i,k),solve(a,m-1,k+1,j));
        t=min(t,ans);  
        
    }
    if(i==0 && j==a.size()-2){   // updating the min when whole array has been checked
        ms=min(ms,t);
    }
    
    return dp[m][j-i]=t;
}

int splitArray(vector<int>& nums, int m) {
  vector<int>a;
    a.push_back(0);
    for(int i=1;i<=nums.size();i++){
        a.push_back(a[i-1]+nums[i-1]);
    }
    if(m==1){
        return a[nums.size()];
    }
    memset(dp,-1,sizeof(dp));
    solve(a,m-1,0,nums.size()-1);
    return ms;
    
}
};
