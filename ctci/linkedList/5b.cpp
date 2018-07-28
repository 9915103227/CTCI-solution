#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node *next;
};
struct node *func(struct node *head1,struct node *head2,int *borrow){
	if(!head1&&!head2){
		*borrow=0;
		return NULL;
	}
	int bor=0;
	struct node *res=func(head1->next,head2->next,&bor);
	struct node *tmp=new node();
	int x=head1->data+head2->data+bor;
	tmp->data=x%10;
	*borrow=x/10;
	tmp->next=res;
	return tmp;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,m;
		cin>>n>>m;
		int flag=-1;
		int x;
		if(n<m)
		{
			flag=0;
			x=m-n;
		}
		if(n>m){
			flag=1;
			x=n-m;
		}
		struct node *head1=new node(),*tr1,*head2=new node(),*tr2;
		tr1=head1;
		if(flag==0){
			
			for(int j=0;j<x;j++)
			{
				struct node *tmp=new node();
				tmp->data=0;
				tmp->next=NULL;
				tr1->next=tmp;
				tr1=tr1->next;
			}
		}
		tr2=head2;
		if(flag==1){
			
			for(int j=0;j<x;j++)
			{
				struct node *tmp=new node();
				tmp->data=0;
				tmp->next=NULL;
				tr2->next=tmp;
				tr2=tr2->next;
			}
		}
		for(int j=0;j<n;j++)
		{
			struct node *tmp=new node();
			cin>>x;
			tmp->data=x;
			tmp->next=NULL;
			tr1->next=tmp;
			tr1=tr1->next;
		}
		for(int j=0;j<m;j++)
		{
			struct node *tmp=new node();
			cin>>x;
			tmp->data=x;
			tmp->next=NULL;
			tr2->next=tmp;
			tr2=tr2->next;
		}
		int borrow=0; 
		struct node *res=func(head1->next,head2->next,&borrow);
		struct node *tmp;
		if(borrow>0){
		tmp=new node();
		tmp->data=borrow;
		tmp->next=res;}
		else
		{
		    tmp=res;
		}
		while(tmp){
			cout<<tmp->data<<" ";
			tmp=tmp->next;
		}
		cout<<endl;
	}
	return 0;
}