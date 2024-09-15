#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i==0 || (j==n-1) || i==(n-1) || j==0)
            {
                cout<<"*";
            }
            cout<<endl;
        }
    }
}