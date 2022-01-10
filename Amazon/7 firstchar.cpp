string FirstNonRepeating(string a){
		    vector<int> check(26,0);
		    vector<int> selected;
		    string s="";
		    int n=a.length();
		    for(int i=0;i<n;i++){
		        
		            check[a[i]-'a']++;
		            if(check[a[i]-'a']==1)
		            selected.push_back(a[i]-'a');
		            int k=0;
		            for(int j=0;j<selected.size();j++){
		                if(check[selected[j]]==1){
		                    s+=char(selected[j]+97);
		                    k=1;
		                    break;
		                }
		            }
		            if(k==0){
		                s+="#";
		            }
		        }
		        
		   return s; 
		    
		}
