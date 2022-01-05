int CountWays(string str){
		    int n=str.length();
		    vector<long long int> v(n+1,-1);
		    
		    if (n == 0 || (n == 1 && str[0] == '0') || str[0]=='0')
            return 0;
		    return countway(str,n,v);
		}
		long long int countway(string digits,int n,vector<long long int> &v){
		    
		    if (n == 0 || n == 1)
                return 1;
            if (digits[0] == '0')
                return 0;
         if(v[n]!=-1)
         return v[n];
            
            long long int count = 0;
         
    
            if (digits[n - 1] > '0')
                count = countway(digits, n - 1,v)%1000000007;
         
           //cout << count << endl;
            if (digits[n - 2] == '1'
                || (digits[n - 2] == '2'
                && digits[n - 1] < '7'))
                count =(count+ countway(digits, n - 2,v))%1000000007;
         
         v[n]=count%1000000007;
            return count%1000000007;
		}
