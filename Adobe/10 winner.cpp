vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> m;
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        int maxv=m[arr[0]];
        string win=arr[0];
        for(int i=1;i<n;i++){
            int curr=m[arr[i]];
            string name=arr[i];
            if(curr>maxv){
                maxv=curr;
                win=name;
            }
            else if(curr==maxv && win>name)
                win=name;
        }
        vector<string> res;
        res.push_back(win);
        res.push_back(to_string(maxv));
        return res;
    }
