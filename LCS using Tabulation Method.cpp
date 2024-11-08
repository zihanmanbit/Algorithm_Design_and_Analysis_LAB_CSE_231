///Longest Common Subsequence
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n=s1.size(),m=s2.size();
    int a[n+1][m+1];
    for(int i=0; i<=m; i++)
        a[0][i]=0;
    for(int i=0; i<=n; i++)
        a[i][0]=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(s1[i-1]==s2[j-1])
                a[i][j]=a[i-1][j-1]+1;
            else
                a[i][j]=max(a[i-1][j],a[i][j-1]);
        }
    }
    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=m; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    cout<<"The length of the LCS is "<<a[n][m]<<endl;
    return 0;
}
