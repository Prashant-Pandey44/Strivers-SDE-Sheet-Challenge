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

Node *findMiddle(Node *head) {
    int l = 0;
    Node* temp = head;
    Node* temp2 = head;
    while(temp != NULL){
        temp = temp->next;
        l++;
    }
    int mid = l/2;
    while(mid--){
        temp2 = temp2->next;
    }
    return temp2;

}

