int missingNumber(const string& str)
{
    int n=str.length();
    int k,ans;
    for(int i=1;i<=6;i++){
        k=1;
        int h=i;
        for(int j=0;j<=n-2*i;j+=i){
            if((stoi(str.substr(j+i,i+1))-stoi(str.substr(j,i)))>=1 && (stoi(str.substr(j+i,i+1))-stoi(str.substr(j,i)))<=2){
                i++;
                j--;
            }
            else if(stoi(str.substr(j,i))>=stoi(str.substr(j+i,i))){
                k=0;
                break;
            }
        }
        i=h;
        if(k==1){
            ans=i;
            break;
        }
    }
    int ans1=0;
    for(int i=0;i<=n-2*ans;i+=ans){
        if((stoi(str.substr(i+ans,ans+1))-stoi(str.substr(i,ans)))>=1 && (stoi(str.substr(i+ans,ans+1))-stoi(str.substr(i,ans)))<=2){
            if((stoi(str.substr(i+ans,ans+1))-stoi(str.substr(i,ans)))==1){
                ans++;
                i--;
            }else if((stoi(str.substr(i+ans,ans+1))-stoi(str.substr(i,ans)))==2){
                ans1=stoi(str.substr(i,ans))+1;
                i--;
                ans++;
            }
        }
        else if((stoi(str.substr(i+ans,ans))-stoi(str.substr(i,ans)))==2){
            ans1=stoi(str.substr(i,ans))+1;
        }
        else if((stoi(str.substr(i+ans,ans))-stoi(str.substr(i,ans)))>2){
            return -1;
        }
    }
    if(ans1==0)
    return -1;
    else{
        return ans1;
    }
