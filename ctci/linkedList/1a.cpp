#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	struct node *next;
};
void lInsert(struct node *head,int x)
{
	struct node *head1=head;
	while(head1->next){
		head1=head1->next;
	}
	struct node *tmp=new node();
	tmp->val=x;
	tmp->next=NULL;
	head1->next=tmp;
}
void removeDup(struct node *head){
	int a[10];
	for(int i=0;i<10;i++)
		a[i]=0;
	struct node *tmp=head;
	while(head->next){
		if(a[head->next->val]>0){
			head->next=head->next->next;
		}
		else
		{
			a[head->next->val]++;
			head=head->next;
		}
	}
}
void print(struct node *head){
	struct node *tmp=head->next;
	while(tmp){
		cout<<tmp->val<<endl;
		tmp=tmp->next;
	}
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		struct node *head=new node();
		head->next=NULL;
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			lInsert(head,x);
		}
		removeDup(head);
		print(head);
	}
}