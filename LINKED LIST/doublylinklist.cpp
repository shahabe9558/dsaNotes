// revision of linked list 
#include<iostream>
using namespace std;
class Node{
   
   public:
   int data;
   Node* prev;
   Node* next;

   Node(int d)
   {
    this->data = d;
    this->prev = NULL;
    this->next = NULL;

   }
   ~Node()
   {
    int value = this->data;
    if(next != NULL)
    {
        delete next;
        next = NULL;
    }
    cout << "memory free for node with data "<< value << endl;

   }

};
void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node* &tail, int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    // temp->prev = tail->next;
    temp->prev = tail;
    tail = temp;

}
void insertAtPosition(Node* &head, Node* &tail, int position, int d)
{
    // insert at start
    if(position == 1)
    {
        insertAtHead(head, d);
        return ;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    } 

  //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

 // inserting at midddle
//  creating a new node 
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node* &head, Node* &tail)
{

  // deleting first Node or starting node
  // cout << "Head = " << head->data << endl;
  // cout << "tail = " << tail->data << endl;

  if(position == 1)
  {
    Node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;
    temp->next = NULL;
    // doing memory free 
    delete temp;
  }
   // deleting last or any node from the linked list  
   Node* curr = head;
   Node* pre = NULL;

   int cnt = 1;
   while(cnt < position)
   {
    pre = curr;
    curr = curr->next;
    cnt++;
   }
   if(position == 4)
   {
    pre->next = curr->next;
    tail = pre;
    curr->next = NULL;
    delete curr;

   }
   else{
    
      pre->next = curr->next;
      curr->next = NULL;
      delete curr;

   }
}

int linkListLen(Node* head)
{
    Node* temp = head;
    int len = 0;
    while(temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    insertAtHead(head, 8);

    insertAtTail(tail, 12);

    insertAtPosition(head, tail, 2, 9);

    print(head);

    deleteNode(1, head, tail);
    print(head);


}











// #include <iostream>
// using namespace std;
// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;

//     // constructor
//     Node(int d)
//     {
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };
// // printing the linked list 

// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;

//     }
// }
// // length of linked l;ist 

// int getLength(Node *head)
// {
//     int len = 0;
//     Node *temp = head;

//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
//     cout << endl;

// }
// // *inserting at head 

// void insertAtHead(Node* &head, int d)
// {
//     Node* temp  = new Node(d);
//     temp->next = head;
//     head -> prev = temp;
//     head = temp;
//     cout << endl;
    

// }
// // inserting at tail 

// void insertAtTail(Node* &tail, int d)
// {
//     Node* temp = new Node(d);
//     tail->next = temp;
//     temp-> prev = tail;
//     tail = temp;

// }
// void insertAtposition(Node* &tail, Node* &head, int position, int d){
//     // position at starting 
//     if(position ==1)
//     {
//         insertAtHead(head, d);
//     return;
//     }

//     Node* temp = head;
//     int cnt =1;
//     while(cnt <position-1)
//     {
//         temp = temp ->next;
//         cnt++;   
//     }
//     // inserting at last position 
//     if(temp -> next == NULL)
//     insertAtTail(tail, d);
//     return;

//     // creating a Node for d 
//     Node* nodeToInsert = new Node(d);
//     nodeToInsert ->next = temp ->next;
//     temp ->next->prev = nodeToInsert;
//     temp ->next = nodeToInsert;
//     nodeToInsert ->prev=temp;

// }
// int main()
// {
//     // Node *node1 = new Node(10); 
//     Node *head = NULL;
//     Node* tail = NULL;


//     // Node *head = node1;
//     // Node* tail = node1;

//     print(head);
//     cout << getLength(head);
//     insertAtHead(head, 34);
//     print(head);
//     insertAtTail(tail, 24);
//     print(head);
//     insertAtTail(tail, 36);
//     print(head);
//     insertAtposition(tail, head, 5, 120);
//     print(head);

//     return 0;
// }