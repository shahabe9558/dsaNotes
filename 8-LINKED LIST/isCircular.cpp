#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
void insertAtPosition(Node* &tail, int element, int d)
{
    // if element is not present 
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode ->next = newNode;
    }
    else{
        Node* curr = tail;
        while(curr->data != element)
        {
            curr = curr->next;
        }
        Node* temp = new Node(d);
        temp ->next = curr->next;
        curr->next = temp;
    }
}
void print(Node* &tail)
{
    Node* temp = tail;
    // if no node is present
    if(tail == NULL)
    {
        cout << "List is empty";
        return;
    }
    do{
        cout << tail->data << " ";
        tail = tail->next;
    }while(tail != temp);

    
}
bool iscircular(Node* &head)
{
    // if list is empty 
    if(head == NULL)
    {
        return true;
    }
    Node* temp = head->next;
    while(temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        return false;
    }
    else{
        return true;
    }
}
int main()
{
    Node* tail = NULL;
    insertAtPosition(tail, 1, 2);
    insertAtPosition(tail, 2, 4);
    insertAtPosition(tail, 4, 6);
    insertAtPosition(tail, 6, 8);
    insertAtPosition(tail, 8, 10);
    print(tail);

    bool solution = iscircular(tail);

    if(solution)
    cout << "Linked list is circular" <<endl;
    else
    cout << "Linked list is not circular" <<endl;
    
}