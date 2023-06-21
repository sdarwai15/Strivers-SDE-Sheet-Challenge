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

bool detectCycle(Node *head)
{
	Node *fast = head->next;
    Node *slow = head;

    while(fast && fast->next) {
        if(fast == slow)
            return true;
        
        fast = fast->next->next;
        slow = slow->next;
    }

    return false;
}
