
//write a function returns the resultant linked list
Node*  addTwoLists(Node* first, Node* second){
  // Code here
  Node *res=new Node();
  Node *head=res;
  int borrow=0;
  while(first&&second){
      int x=first->data+second->data+borrow;
      Node *tmp=new Node();
      tmp->data=x%10;
      borrow=x/10;
      first=first->next;
      second=second->next;
      tmp->next=NULL;
      head->next=tmp;
      head=head->next;
  }
  while(first){
      Node *tmp=new Node();
      int x=first->data+borrow;
      borrow=x/10;
      tmp->data=x%10;;
      tmp->next=NULL;
      head->next=tmp;
      head=head->next;
      first=first->next;
  }
  while(second){
      Node *tmp=new Node();
      int x=second->data+borrow;
      borrow=x/10;
      tmp->data=x%10;;
      tmp->next=NULL;
      head->next=tmp;
      head=head->next;
      second=second->next;
  }
  if(borrow>0){
      Node *tmp=new Node();
      tmp->data=borrow;
      tmp->next=NULL;
      head->next=tmp;
  }
  return res->next;
}