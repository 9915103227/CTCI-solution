#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;int y;
};
int main()
{
	
		int r,c,p;
		cin>>r>>c;
		r--;c--;
		//bool blocked[r+1][c+1];
		/*for(int j=0;j<=r;j++)
		{
			for(int k=0;k<=c;k++)
				blocked[j][k]=false;
		}*/
		/*for(int j=0;j<p;j++){
			int l,m;
			cin>>l>>m;
			l--;m--;
			blocked[l][m]=true;
			//struct node tmp;
			//tmp.x=l;
			//tmp.y=m;
			//blocked.push_back(tmp);
		}*/
		long int a[r+1][c+1];
		//a[r][c]=1;
		vector<struct node>::iterator itr;
		for(int j=r;j>=0;j--)
		{
			for(int k=c;k>=0;k--)
			{
				if(j==r&k==c)
				{
					a[j][k]=1;
					continue;
				}
				/*if(blocked[j][k])
				{
					a[j][k]=0;
					continue;
				}*/
				//a[j][k]=(a[j][k+1]+a[j+1][k])%1000000007;
				int s=0;
				if(j<r)
					s+=a[j+1][k];
				if(k<c)
					s+=a[j][k+1];
				s%=1000000007;
				a[j][k]=s;
			}
		}
		cout<<a[0][0]<<endl;//vector,r,c,presentX,presentY
	
	return 0;
}