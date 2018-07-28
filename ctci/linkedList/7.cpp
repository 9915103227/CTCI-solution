int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int n1=0,n2=0;
    struct Node *ptr1=head1,*ptr2=head2;
    while(head1){
        n1++;
        head1=head1->next;
    }
    while(head2){
        n2++;
        head2=head2->next;
    }
    int d=abs(n1-n2);
    //struct Node *ptr1,*ptr2;
    if(n1>n2){
        while(d>0){
            d--;
            ptr1=ptr1->next;
        }
    }else
    {
        while(d>0){
            d--;
            ptr2=ptr2->next;
        }
    }
    while(ptr1&&ptr2){
        if(ptr1==ptr2){
            return ptr1->data;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
}