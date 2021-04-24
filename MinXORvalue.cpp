int minxorpair(int N, int arr[]){    
        //code here
        
        int min_xor = INT_MAX;
        for(int i=0 ; i<N ; i++)
           for(int j=i+1; j<N ; j++)
           
           min_xor = min(min_xor, arr[i]^arr[j]);
           
        return min_xor;   
           
    }
};