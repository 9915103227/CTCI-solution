#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	struct node *next;
};
void lInsert(struct node *head,int x){
	struct node *head_list=head;
	while(head_list->next){
		head_list=head_list->next;
	}
	struct node *tmp=new node();
	tmp->val=x;
	tmp->next=NULL;
	head_list->next=tmp;
}
void remove(struct node *head){
	struct node *head_list=head;
	while(head_list){
		struct node *head_next=head_list;
		while(head_next->next){
			if(head_next->next->val==head_list->val){
				head_next->next=head_next->next->next;
			}
			else
			{
				head_next=head_next->next;
			}
		}
		head_list=head_list->next;
	}
}
void print(struct node *head){
	struct node *tmp=head;
	while(tmp->next){
		cout<<tmp->next->val<<endl;
		tmp=tmp->next;
	}
}
int main(){
	int n;
	cin>>n;
	struct node *head=new node();
	head->next=NULL;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		lInsert(head,x);
	}
	remove(head);
	print(head);
}