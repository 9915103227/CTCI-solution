#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                cin>>a[j][k];
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                cout<<a[k][n-1-j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}