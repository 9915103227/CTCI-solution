#include<bits/stdc++.h>
using namespace std;
struct node{
	int l,b,h;
	bool visited;
};
int func(struct node *box,int *mat,int index,int n){
	if(mat[index]!=-1)
		return(mat[index]);
	int maxH=0;
	for(int j=0;j<=n;j++)
	{
		if(!box[j].visited&&box[j].l<box[index].l&&box[j].b<box[index].b){
			box[j].visited=true;
			if(mat[j]!=-1)
				maxH=max(maxH,box[j].h+mat[j]);
			else
				maxH=max(maxH,box[j].h+func(box,mat,j,n));
			box[j].visited=false;
		}
	}
	mat[index]=maxH;
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
		int mat[3*n];
		for(int j=0;j<3*n;j++)
		{
			mat[j]=-1;
		}
		int maxH=0;
		for(int j=0;j<(3*n);j++)
		{
			maxH=max(maxH,box[j].h+func(box,mat,j,3*n-1));
		}
		cout<<maxH<<endl;
	}
	return 0;
}