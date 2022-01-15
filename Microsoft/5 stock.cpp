vector <int> calculateSpan(int price[], int n)
    {
       vector<int> a;
       stack<int> s1;
       a.push_back(1);
       s1.push(0);
       for(int i=1;i<n;i++){
           while(s1.empty()==false && price[s1.top()]<=price[i]){
               s1.pop();
           }
           int span=(s1.empty())?(i+1):(i-s1.top());
           a.push_back(span);
           s1.push(i);
       }
       return a;
    }
