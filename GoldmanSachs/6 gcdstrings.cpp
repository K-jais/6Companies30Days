string gcdOfStrings(string str1, string str2) {
        while(str1!=str2){
            if(str1.length()>str2.length()){
                size_t it=str1.find(str2);
                if(it!=string::npos){
                    if(it!=0 && it<str2.length() && str1.find(str2,it+str2.length())==string::npos)
                        return "";
                    str1.erase(it,str2.length());
                }else{
                    return "";
                }
            }else{
                size_t it=str2.find(str1);
                if(it!=string::npos){
                    if(it!=0 && it<str1.length() && str2.find(str1,it+str1.length())==string::npos)
                        return "";
                    str2.erase(it,str1.length());
                }else{
                    return "";
                }
            }
        }
        return str1;
    }
