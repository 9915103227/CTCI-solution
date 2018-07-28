
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* struct Node
 {
   int data;
   Node* next;
 }; */
/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node *head, int n)
{
    int p=0;
    struct Node *tmp=head;
      while(tmp)
      {
          p++;
          tmp=tmp->next;
      }
     if((p+1-n)>0){
         tmp=head;
         int x=p+1-n;
         p=0;
         while(tmp){
             p++;
             if(p==x){
                 return tmp->data;
             }
             tmp=tmp->next;
         }
     }
     else
     {
         return -1;
     }
}