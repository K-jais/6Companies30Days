int findPosition(int N , int M , int K) {
        if(M+K-1<=N){
            return M+K-1;
        }else{
            int n=(M+K-1)%N;
            if(n==0){
                return N;
            }
            else{
                return n;
            }
        }
    }
