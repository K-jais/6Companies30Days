string printMinNumberForPattern(string s){
        string a="";
        int n=s.length();
        int min=1,minnext=1;
        for(int i=0;i<n;i++){
            
            if(s[i]=='I'){
                a+=to_string(min);
                if(minnext>min){
                    min=minnext+1;
                }else{
                    min++;
                }
            }
            int j=i,minprev=min;
            while(j<n && s[j]=='D'){
                j++;
                min++;
            }
            if(j>i)
            i=j-1;
            minnext=min;
            while(min>minprev){
                a+=to_string(min);
                min--;
            }
        }
        a+=to_string(min);
        return a;
    }
