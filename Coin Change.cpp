#include<bits/stdc++.h>
using namespace std;

int counts(int coins[],int n, int target_amount)
{
    if(target_amount==0) return 1;
    if(target_amount<0||n==0) return 0;

    return counts(coins,n,target_amount-coins[n-1])+counts(coins,n-1,target_amount);
}

int main()
{
    int coins[]={1,2,3};
    int n=3;
    int target_amount=5;
    cout<<counts(coins,n,target_amount)<<endl;

    return 0;
}
