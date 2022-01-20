vector<string> res;
    void help(int op,int en,int n,string s){
        if(s.size()==n*2)
        {
            res.push_back(s);
            return;
        }
        if(op<n)
            help(op+1,en,n,s+'(');
        if(en<op)
            help(op,en+1,n,s+')');
    }
    vector<string> AllParenthesis(int n) 
    {
        help(0,0,n,"");
        return res;
    }
