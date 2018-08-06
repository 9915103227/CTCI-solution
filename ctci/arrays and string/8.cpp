#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int mat[n][m];
        bool flag[n][m];
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                cin>>mat[j][k];
                flag[j][k]=false;
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
            {
                if(!flag[j][k]&&mat[j][k]==1){
                    for(int p=0;p<n;p++)
                    {
                        if(mat[p][k]==0){
                        mat[p][k]=1;
                        flag[p][k]=true;}
                    }
                    for(int p=0;p<m;p++)
                    {
                        if(mat[j][p]==0){
                        mat[j][p]=1;
                        flag[j][p]=true;}
                    }
                }
            }
        }
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<m;k++)
                cout<<mat[j][k]<<" ";
        }
        cout<<endl;
    }
    return 0;
}