/*
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
*/

Node* removeKthNode(Node* head, int k)
{
    int l =0;
    Node* temp = head;
    while(temp != NULL){
        l++;
        temp = temp->next;
    }
    if(k == l) return head->next;
    temp = head;
    int x = l-k-1;

    while(x--){
        temp = temp->next;

    }
    temp->next = temp->next->next;
    return head;
}
