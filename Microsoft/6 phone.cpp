void phoneDigits(map<int,string> keypad,int n,string ans,vector<string> &words,int i,int arr[]){
        if(i==n){
            words.push_back(ans);
            return;
        }
        int a=arr[i];
        for(int j=0;j<keypad[a].length();j++){
            phoneDigits(keypad,n,ans+keypad[a][j],words,i+1,arr);
        }
    }
    vector<string> possibleWords(int arr[], int n)
    {
        map<int,string> keypad;
        vector<string> words;
        string ans="";
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                keypad[arr[i]]="abc";
            }else if(arr[i]==3){
                keypad[arr[i]]="def";
            }else if(arr[i]==4){
                keypad[arr[i]]="ghi";
            }else if(arr[i]==5){
                keypad[arr[i]]="jkl";
            }else if(arr[i]==6){
                keypad[arr[i]]="mno";
            }else if(arr[i]==7){
                keypad[arr[i]]="pqrs";
            }else if(arr[i]==8){
                keypad[arr[i]]="tuv";
            }else if(arr[i]==9){
                keypad[arr[i]]="wxyz";
            }
        }
        phoneDigits(keypad,n,ans,words,0,arr);
        return words;
    }
