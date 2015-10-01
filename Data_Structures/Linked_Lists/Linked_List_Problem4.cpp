/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node* current = new Node;
    current = head;
    if(head == NULL) {return head;}
    else
    {
        if(position == 0) {current = head->next; delete head; head = current; }
        else
        {
            int i =0;  
            while(current!=NULL)
            {
                if(i == (position)-1)
                {  
                    delete current->next;
                    current -> next = current->next->next;  
                    return head;  
                }
                else  
                    current = current->next;    
                i++;      
            }
        }
    }
    return head;
}
