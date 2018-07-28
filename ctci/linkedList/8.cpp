bool isCircular(Node *head)
{
   // Your code here
   Node *ptr1=head,*ptr2=head->next;
   while(ptr1&&ptr2){
        if(ptr1==ptr2)
            return true;
        ptr1=ptr1->next;
        if(ptr2->next){
            ptr2=ptr2->next->next;
        }
        else
            ptr2=NULL;
   }
   return false;
}