vector<int> subarraySum(int arr[], int n, long long s)
   {
       vector <int> v;
       int start = 0;
       int current_sum = 0;
       for(int i=0;i<n;i++)
       {
           current_sum+= arr[i];
           while(current_sum >= s && v.size() == 0)
           {
               if(current_sum == s)
               {
                   v.push_back(start+1);
                   v.push_back(i+1);
                   break;
               }
              
               current_sum-=arr[start];
               start++;
           }
       }
       if(v.size()==0)
       {
           v.push_back(-1);
       }
       return v;
   }
