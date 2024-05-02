
#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor using linklist
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
// Head insertion of linked list 

void InsertAtHead(Node* &head, int d)
{
    // new node create
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void print(Node* &head)
{
    Node* temp = head;
    while (temp != NULL) 
    {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
void InsertAtTail(Node* &tail, int d)
{

    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}
void insertAtPosition(Node* &tail, Node* &head, int position, int d)
{
    // position at starting 
    if(position ==1)
    {
        InsertAtHead(head, d);
    return;
    }

    Node* temp = head;
    int cnt =1;
    while(cnt <position-1)
    {
        temp = temp ->next;
        cnt++;   
    }
    // inserting at last position 
    if(temp -> next == NULL)
    InsertAtTail(tail, d);
    return;

    // creating a Node for d 
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
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
void moveElement()
int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    Node* tail = node1;
    InsertAtHead(head, 2);
    InsertAtHead(head, 3);
    InsertAtHead(head, 4);
    InsertAtHead(head, 5);
    print(head);


if(head->next == NULL) 
return head;          
LinkedListNode<int> *lastNode= NULL; 
LinkedListNode<int> *temp = head;        
while(temp->next->next != NULL) 
{       
temp = temp->next;
}
lastNode = temp->next;  
temp->next= NULL;  
LinkedListNode<int> *temp1 = head;
head = lastNode;       
head->next = temp1;    
return head;

    //   cout << node1->next << endl;
    //   cout << node1->data << endl;
    // print(head);
    // InsertAtTail(tail, 12);
    // print(head);  
    // InsertAtTail(tail, 16);
    // print(head); 

    // insertAtPosition(tail, head, 1, 22);
    // print(head);
    // cout << "Head" << head ->data <<endl;
    // cout << "Tail" << tail ->data <<endl;

    // bool solution = iscircular(head);

    // if(solution)
    // cout << "Linked list is circular" <<endl;
    // else
    // cout << "Linked list is not circular" <<endl;

    // for head 
    // Node* head = node1; 
    
    // print(head);
    // InsertAtHead(head, 12);
    // print(head); 
    // InsertAtHead(head, 16);
    // print(head); 
    return 0;
}