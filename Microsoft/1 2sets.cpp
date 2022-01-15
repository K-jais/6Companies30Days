int minDifference(int arr[], int n)  { 
	    if(n==1){
	        return arr[0];
	    }
	    int origsum=0;
	    for(int i=0;i<n;i++){
	        origsum+=arr[i];
	    }
	    int sum=origsum/2;
	    bool checkbool[n][sum+1];
	    for(int i=0;i<n;i++){
	        for(int j=0;j<=sum;j++){
	            checkbool[i][j]=false;
	        }
	    }
	    for(int i=0;i<=sum;i++){
	        if(i==arr[0]){
	            checkbool[0][i]=true;
	        }
	    }
	    for(int i=0;i<n;i++){
	        checkbool[i][0]=true;
	    }
	    for(int i=1;i<n;i++){
	        for(int j=1;j<=sum;j++){
	            if(checkbool[i-1][j]){
	                checkbool[i][j]=true;
	            }else{
	                if(j>=arr[i]){
	                    checkbool[i][j]=checkbool[i-1][j-arr[i]];
	                }
	            }
	        }
	    }
	    int firstpartition=0;
	    for(int j=sum;j>=0;j--){
	        if(checkbool[n-1][j]){
	            firstpartition=j;
	            break;
	        }
	    }
	    int secondpartition=origsum-firstpartition;
	    return abs(secondpartition-firstpartition);
	    
	} 
