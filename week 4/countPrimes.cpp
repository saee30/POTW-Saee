class Solution {
public:
    int countPrimes(int n) {
        
        vector<int>prime(n,1);
        int count=0;

        if(n<=2) return 0;
        prime[0]=prime[1]=0;

        for(int i=2;i*i<n;i++)
        {
            for(int j=i*i;j<n;j=j+i)
            {
                prime[j]=0;
            }
        }

        for(int i=0;i<n;i++)
        {
            if(prime[i]==1)
            count++;
        }
        return count;
    }

    
};
