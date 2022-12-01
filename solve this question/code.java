class Solution {
    public int countGoodStrings(int low, int high, int zero, int one) {
        int dp[]=new int[high+1];
        Arrays.fill(dp,-1);
        int k=0;
        int m=1000000007;
        for(int i=low;i<=high;i++)
        {
            k=(k%m+task(dp,i,zero,one,m)%m)%m;
        }
        return k;
    }
    public int task(int dp[], int i, int s, int k, int m)
    {
        if(i<0)
        {
            return 0;
        }
        if(i==0)
        {
            return 1;
        }
        if(dp[i]!=-1)
        {
            return dp[i]%m;
        }
        return dp[i]=task(dp,i-s,s,k,m)%m+task(dp,i-k,s,k,m)%m;
    }
}
