vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        priority_queue<pair<int,int>> pq;
        vector<int> a;
        for(int i=0;i<k;i++){
            pq.push(make_pair(arr[i],i));
        }
        a.push_back(pq.top().first);
        for(int i=k;i<n;i++){
            while(pq.empty()==false && pq.top().second<=i-k){
                pq.pop();
            }
            pq.push(make_pair(arr[i],i));
            a.push_back(pq.top().first);
        }
        return a;
    }
