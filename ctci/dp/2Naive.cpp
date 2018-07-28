#include<bits/stdc++.h>
using namespace std;
struct node{
	int x;int y;
};
long int func(vector<struct node> *blocked,int r,int c,int px,int py)
{
	vector<struct node>::iterator itr;
	for(itr=(*blocked).begin();itr!=(*blocked).end();itr++)
	{
		if(px==itr->x&&py==itr->y)
			return 0;
	}
	if(px==r&&py==c)
		return 1;
	if(px>r||py>c)
		return 0;

	return((func(blocked,r,c,px+1,py)+func(blocked,r,c,px,py+1))%1000000007);
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int r,c,p;
		cin>>r>>c>>p;
		r--;c--;
		vector<struct node> blocked;
		for(int j=0;j<p;j++){
			int l,m;
			cin>>l>>m;
			l--;m--;
			struct node tmp;
			tmp.x=l;
			tmp.y=m;
			blocked.push_back(tmp);
		}
		cout<<func(&blocked,r,c,0,0)<<endl;//vector,r,c,presentX,presentY
	}
	return 0;
}