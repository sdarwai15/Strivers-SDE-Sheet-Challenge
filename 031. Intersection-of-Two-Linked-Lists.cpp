/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };

*****************************************************************/

Node* findIntersection(Node *firstHead, Node *secondHead)
{
    if(firstHead==NULL || secondHead==NULL)
        return NULL;
        
    Node* l1 = firstHead;
    Node* l2 = secondHead;

    while(l1 != l2) {
        l1 = l1 == NULL ? secondHead : l1->next;
        l2 = l2 == NULL ? firstHead : l2->next;
    }
    
    return l1;
}
