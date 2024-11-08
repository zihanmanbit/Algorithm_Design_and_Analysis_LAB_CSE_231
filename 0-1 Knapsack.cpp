#include<bits/stdc++.h>
using namespace std;

int knapsack0_1(int w,int n,int wt[],int profit[]){
    if(w==0||n==0)
        return 0;
    if(wt[n-1]>w)
        return knapsack0_1(w,n-1,wt,profit);
    else
        return max(knapsack0_1(w,n-1,wt,profit),profit[n-1]+knapsack0_1(w-wt[n-1],n-1,wt,profit));
}
int main()
{
    int profit[]={1,7,11};
    int wt[]={1,2,3};
    int n=sizeof(profit)/sizeof(profit[0]);
    int capacity=5;
    cout<<knapsack0_1(capacity,n,wt,profit)<<endl;
    return 0;
}
