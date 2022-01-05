int *findTwoElement(int *arr, int n) {
        int xor2=arr[0],xor1=0,xor3=arr[0];
        int b=0,a=0;
        for(int i=1;i<=n;i++){
            xor1^=i;
        }
        for(int i=1;i<n;i++){
            xor3^=arr[i];
        }
        xor2=xor1^xor3;
        for (int i=0;i<n;i++) {
            if (arr[abs(arr[i]) - 1] > 0)
                arr[abs(arr[i]) - 1]=-arr[abs(arr[i]) - 1];
            else{
                a=abs(arr[i]);
                break;
            }
        }
        int *g=new int[2];
        g[0]=a;
        g[1]=xor2^a;
        return g;
    }
