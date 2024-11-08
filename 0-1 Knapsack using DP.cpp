#include<bits/stdc++.h>
using namespace std;
int dp[10][10];
int knapsack0_1(int w,int n,int wt[],int profit[]){
    if(w==0||n==0)
        return 0;
    if(dp[n][w]!=-1)
        return dp[n][w];
    if(wt[n-1]>w)
        return dp[n][w]=knapsack0_1(w,n-1,wt,profit);
    else
        return dp[n][w]=max(knapsack0_1(w,n-1,wt,profit),profit[n-1]+knapsack0_1(w-wt[n-1],n-1,wt,profit));
}
int main()
{
    int profit[]={1,7,11};
    int wt[]={1,2,3};
    int n=sizeof(profit)/sizeof(profit[0]);
    int capacity=5;
    memset(dp,-1,sizeof(dp));
    cout<<knapsack0_1(capacity,n,wt,profit)<<endl;
    return 0;
}
