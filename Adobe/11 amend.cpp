string amendSentence (string s)
    {
        string res="";
        for(int i=0;i<s.size();i++){
            if(i!=0 && isupper(s[i]))
            {
                res+=" ";
            }
            res+=tolower(s[i]);
        }
        return res;
    }
