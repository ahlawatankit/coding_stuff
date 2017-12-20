bool has_cycle(Node* head) 
{
    Node *p,*q;
    p=head;
    q=head;
    if(p==NULL)
    {
        return false;
    }
    else
    {
           while((q)&&(p)&&(p->next!=NULL))
           {
               p=p->next;
               q=q->next->next;
               if(q==p)
               {
                   return true;
               }
           }
       
    }
    return false;
}