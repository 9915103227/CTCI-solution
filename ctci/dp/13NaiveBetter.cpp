#include<bits/stdc++.h>
using namespace std;
struct node{
	int l,b,h;
	bool visited;
};
int func(struct node *box,int index,int n){
	int maxH=0;
	for(int j=0;j<=n;j++)
	{
		if(!box[j].visited&&box[j].l<box[index].l&&box[j].b<box[index].b){
			box[j].visited=true;
			maxH=max(maxH,box[j].h+func(box,j,n));
			box[j].visited=false;
		}
	}
	return maxH;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		struct node box[3*n];
		int k=0;
		for(int j=0;j<(3*n);j++)
			box[j].visited=false;
		for(int j=0;j<n;j++)
		{
			int l,b,h;
			cin>>l>>b>>h;
			//keep length shorter
			if(l<b)
			{
				box[k].l=l;
				box[k].b=b;
				box[k].h=h;
				k++;
			}
			else
			{
				box[k].l=b;
				box[k].b=l;
				box[k].h=h;
				k++;
			}
			if(b<h)
			{
				box[k].l=b;
				box[k].b=h;
				box[k].h=l;
				k++;
			}
			else
			{
				box[k].l=h;
				box[k].b=b;
				box[k].h=l;
				k++;
			}
			if(l<h)
			{
				box[k].l=l;
				box[k].b=h;
				box[k].h=b;
				k++;
			}
			else
			{
				box[k].l=h;
				box[k].b=l;
				box[k].h=b;
				k++;
			}
		}
		int maxH=0;
		for(int j=0;j<(3*n);j++)
		{
			maxH=max(maxH,box[j].h+func(box,j,3*n-1));
		}
		cout<<maxH<<endl;
	}
	return 0;
}