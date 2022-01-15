int minSteps(int d){
        int sum=0,i=1;
        while(true){
            if(((sum+i)-d==0) || (((sum+i)-d)>=2 && ((sum+i)-d)%2==0)){
                return i;
            }else{
                sum+=i;
                i++;
            }
        }
    }
