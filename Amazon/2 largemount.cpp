int longestMountain(vector<int>& arr) {
        if(arr.size()<3){
            return 0;
        }
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=1;i<n-1;i++){
            int j=i-1,m=i;
            while(j>=0 && m>=0 && arr[j]<arr[m]){
                j--;
                m--;
            }
            j++;
            int k=i+1,l=i;
            while(k<n && l<n && arr[k]<arr[l]){
                k++;
                l++;
            }
            k--;
            if(k!=j && j!=i && k!=i)
            maxi=max(k-j+1,maxi);
        }
        if(maxi==INT_MIN)
            return 0;
        else
            return maxi;
    }
