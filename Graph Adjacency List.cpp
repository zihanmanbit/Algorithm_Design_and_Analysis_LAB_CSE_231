//Graph: https://www.programiz.com/sites/tutorial2program/files/adjacency-list-graph.png
#include<bits/stdc++.h>
using namespace std;

int grid[10][10];

void addEdge(int i,int j)
{
    grid[i][j]=1;
    grid[j][i]=1;
}

int main()
{
    int vertex,edges;
    cin>>vertex>>edges;
    int source, destination;
    for(int i=0; i<edges; ++i)
    {
        cin>>source>>destination;
        addEdge(source,destination);
    }
    for(int i=0; i<vertex; ++i)
    {
        cout<<i<<"-> ";
        for(int j=0; j<vertex; ++j)
        {
            if(grid[i][j]==1)
                cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
