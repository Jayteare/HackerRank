/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
    if(headA == NULL && headB == NULL)
        return 1;
    if(headA == NULL && headB != NULL)
        return 0;
    if(headA != NULL && headB == NULL)
        return 0;
    if(headA->data != headB->data)
        return 0;
    
    Node *currentA = new Node;
    Node *currentB = new Node;
    currentA = headA;
    currentB = headB;
    
    while(true)
    {
        if(currentA == NULL && currentB == NULL)
        return 1;
        if(currentA == NULL && currentB != NULL)
        return 0;
        if(currentA != NULL && currentB == NULL)
        return 0;
        if(currentA->data != currentB->data)
        return 0;
        
        currentA = currentA->next;
        currentB = currentB->next;
        
    }
    
    return 1;
    
}
