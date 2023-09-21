
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
    // destrutor 
    ~Node(){
        int value = this ->data;
        
        // memory free 
        if(this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for node with data = " << value << endl;
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


// deleting a node from starting ending and middle 
void deleteNode(int position, Node* &head){
    // deleting first node / starting Node 
    if(position == 1)
    {
        Node* temp = head;
        head = head ->next;
        // memory free start node 
        delete temp;

    }
    else{
        // deleting any middle node or last node 
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt <= position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;

        }
        prev -> next = curr ->next;
        delete curr;
    }
}


int main()
{
    Node* node1 = new Node(10);
    //   cout << node1->data << endl;
    //   cout << node1->next << endl;
    Node* head = node1;
    Node* tail = node1;
    print(head);
    InsertAtTail(tail, 12);
    print(head);  
    InsertAtTail(tail, 16);
    print(head); 

    insertAtPosition(tail, head, 1, 22);
    print(head);
    cout << "Head" << head ->data <<endl;
    cout << "Tail" << tail ->data <<endl;

    deleteNode(3, head);
    print(head);

    // for head 
    // Node* head = node1; 
    
    // print(head);
    // InsertAtHead(head, 12);
    // print(head); 
    // InsertAtHead(head, 16);
    // print(head); 
    return 0;
}