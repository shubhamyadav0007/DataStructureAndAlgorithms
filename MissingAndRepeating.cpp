vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int size=1000001;
        int n =arr.size();
       int hash[size]={0};
       int dup=0;
       int mis=0;
       for(int i=0;i<n;i++)
       {
           hash[arr[i]]++;
       }
       for(int i=1;i<=n;i++)
       {
           if(hash[i]==0)
           {
               mis=i;
           }
           if(hash[i]==2)
           {
               dup=i;
           }
       }
       return {dup,mis};
    }