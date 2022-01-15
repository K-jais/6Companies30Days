vector<vector<int> > fourSum(vector<int> &nums, int target) {
        vector<vector<int>> results;
        int n=nums.size();
        if(n<4){
            return results;
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                int tar=target-(nums[i]+nums[j]);
                int l=j+1,k=n-1;
                while(l<k){
                    if(nums[l]+nums[k]==tar){
                        vector<int> re;
                        re.push_back(nums[l]);
                        re.push_back(nums[k]);
                        re.push_back(nums[j]);
                        re.push_back(nums[i]);
                        results.push_back(re);
                        while(l<k && nums[l]==re[0])
                            l++;
                        while(l<k && nums[k]==re[1])
                            k--;
                    }
                    else if(nums[l]+nums[k]<tar){
                        l++;
                    }else{
                        k--;
                    }
                }
                while(j+1<n && nums[j]==nums[j+1]){
                    j++;
                }
            }
            while(i+1<n && nums[i]==nums[i+1]){
                    i++;
                }
        }
        for(int i=0;i<results.size();i++){
            sort(results[i].begin(),results[i].end());
        }
        return results;
    }
