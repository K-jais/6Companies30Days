int maxPerformance(int n, vector& speed, vector& efficiency, int k) {

    vector<pair<int,int>>v;
    
    for(int i=0;i<n;i++)
    {
        v.push_back({efficiency[i],speed[i]});
    }
    sort(v.begin(),v.end());
    
    //min heap;
    
    priority_queue<long long ,vector<long long>,greater<long long>>pq;
    long long sum=0;
    long long ans=0;
    long long mod=1e9+7;
    
    
    for(int i=n-1;i>=0;i--)
    {
        pq.push({v[i].second});
        sum+=v[i].second;
        
        while(pq.size()>k)
        {
            sum-=pq.top();
            pq.pop();
            
          
        }
          ans=max(ans,sum*v[i].first);
    }
    return ans%mod;
}
