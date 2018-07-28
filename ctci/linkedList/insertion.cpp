#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	struct node *next;
};
void lInsert(struct node *head_list,int x){
	struct node *head=head_list;
	while(head->next!=NULL){
		head=head->next;
	}
	struct node *tmp=new node();
	tmp->val=x;
	tmp->next=NULL;
	head->next=tmp;
}
void print(struct node *head){
	struct node *head_list=head->next;
	while(head_list){
		cout<<head_list->val<<endl;
		head_list=head_list->next;
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
		struct node *head;
		head=new node();
		head->next=NULL;
		for(int j=0;j<n;j++)
		{
			int x;
			cin>>x;
			lInsert(head,x);
		}
		print(head);
	}
}