void matchPairs(char nuts[], char bolts[], int n) {
	    map<char,int> mp;
	    for(int i=0;i<n;i++){
	        mp[nuts[i]]++;
	        mp[bolts[i]]++;
	    }
	    int i=0;
	    for(auto it=mp.begin();it!=mp.end();it++){
	        if(it->second==2){
	            nuts[i]=it->first;
	            bolts[i]=it->first;
	            i++;
	        }
	    }
	}
