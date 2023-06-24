/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     if(head == NULL||head->next == NULL||k == 0) 
          return head;
     
     //calculating length
     Node* temp = head;
     int length = 1;

     while(temp->next != NULL) {
          ++length;
          temp = temp->next;
     }

     //link last node to first node
     temp->next = head;
     k = k%length; //when k is more than length of list
     int end = length-k; //to get end of the list

     while(end--)
          temp = temp->next;
    
     //breaking last node link and pointing to NULL
     head = temp->next;
     temp->next = NULL;
          
     return head;
}
