vector<int> leaders(int a[], int n){
        deque<int> dq;
        vector<int> res;
        res.push_back(a[n-1]);
        dq.push_back(a[n-1]);
        
        for(int i=n-2;i>=0;i--){
            if(a[i]>=dq.front()){
                res.push_back(a[i]);
            }
            while(!dq.empty() && dq.back()<a[i])
            dq.pop_back();
            dq.push_back(a[i]);
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
