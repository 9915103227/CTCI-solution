#include<bits/stdc++.h>
using namespace std;
void func(int *color,int x,int y,int curr,int n,int m,int k)
{
	if(x<0||x>=n||y<0||y>=m)
		return;
	if(*(color+m*x+y)==curr)
	{
		*(color+m*x+y)=k;
		func(color,x-1,y,curr,n,m,k);
		func(color,x+1,y,curr,n,m,k);
		func(color,x,y-1,curr,n,m,k);
		func(color,x,y+1,curr,n,m,k);
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		int color[n][m];
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				cin>>color[j][k];
			}
		}
		int x,y,k;
		cin>>x>>y>>k;
		int curr=color[x][y];
		//func(&color[0][0],x,y,curr,n-1,m-1,k);
		color[x][y]=k;
		//n--;m--;
		func(&color[0][0],x-1,y,curr,n,m,k);
		func(&color[0][0],x+1,y,curr,n,m,k);
		func(&color[0][0],x,y-1,curr,n,m,k);
		func(&color[0][0],x,y+1,curr,n,m,k);
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<m;k++)
			{
				cout<<color[j][k]<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}