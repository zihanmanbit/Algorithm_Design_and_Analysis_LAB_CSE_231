#include<bits/stdc++.h>
using namespace std;
#define mx 1000
#define mod 1000000007
int dp[mx][mx];
int nCr(int n, int r)
{
    if(n==r) dp[n][r]=1;
    if(r==1) dp[n][r]=n;
    if(r==0) dp[n][r]=1;
    if(dp[n][r]==-1)
        dp[n][r]=(nCr(n-1,r-1)%mod+nCr(n-1,r)%mod)%mod;
    return dp[n][r];
}
int main()
{
    memset(dp,-1,sizeof(dp));
    cout<<nCr(5,3);
    return 0;
}
