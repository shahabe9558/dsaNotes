// #include<iostream>
// using namespace std;
// class Node{
//    public:
//    int data;
//    Node* next;
//    Node(int d)
//    {
//      this->data = d;
//      this->next = NULL;
//    }

//    //destructor
//     ~Node() {
//         int value = this -> data;
//         //memory free
//         cout << "this->data = " << this->data << endl;
//         // if(this->next != NULL) {
//         //     delete next;
//         //     this->next = NULL;
//         // }
//         cout << " memory is free for node with data " << value << endl;
//     }
// };


#include <iostream>
using namespace std;
class Node{
  public :
  int data;
  Node *next;
  // definning the constructor 
  Node(int d)
  {
    this->data = d;
    this->next = NULL;
  }
  // destructor 
  ~Node()
  {
    int value = this -> data;
    cout << "this->data = " << this->data << endl;
    if(this->next != NULL) {
        delete next;
        this->next = NULL;
    }
    cout << "memory is free for node with data " << value << endl;
  }
};
void print(Node * head)
{
  if(head == NULL)
  {
    cout << "List is empty" << endl;
    return;
  }
  Node * temp = head;
  while(temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}
void insertAtHead(Node * &head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}
void insertAtTail(Node * &tail, int d)
{
  Node * temp  = new Node(d);
  tail->next = temp;
  tail = temp;
}
void insertAtPos(Node * &head, int position, int d)
{
  // agar head par laganan ho to 
  if(position == 1)
  {
    insertAtHead(head, d);
    return;
  }
  // pahle to positiontak pahucna hoga na 
  Node * temp = head;
  int cnt = 1;
  while(cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }
  if(temp->next == NULL)
  {
    insertAtTail(temp, d);
    return;
  }
  // pos par insert kar do 
  Node* nodeToinsert = new Node(d);
  nodeToinsert->next = temp->next;
  temp->next = nodeToinsert;
}
void deleteNode(Node * &head, Node * &tail, int position)
{
  // agar position one hai to 
  if(position == 1)
  {
    Node * temp = head;
    head = head->next;
    temp->next = NULL;
    // doint memory free 
    delete temp;
    return;
  }
  // if it is last node  or any
  Node * curr = head;
  Node * pre = NULL;
  int cnt = 1;
  while(cnt < position)
  {
    pre = curr;
    curr = curr->next;
    cnt++;
  }
  // means on last pos 
  if(curr->next == NULL)
  {
    pre->next = curr->next;
    tail = pre;
    curr->next = NULL;
    delete curr;
  }
  else
  {
    pre->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}
int main()
{
  Node *node1 = new Node(12);
  Node* head = node1;
  Node * tail = node1;
  insertAtHead(head, 10);
  insertAtHead(head,8);
  insertAtHead(head,6);
  insertAtTail(tail, 14);
  insertAtPos(head, 3, 9);
  insertAtPos(head, 1, 4);
  insertAtPos(head, 8, 16);
  deleteNode(head, tail, 4);
  deleteNode(head, tail, 7);
  deleteNode(head, tail, 1);
  deleteNode(head, tail, 1);
  print(head);
  cout << "Head is at " << head->data << endl;
  cout << "Tail is at " << tail->data << endl;
  cout << "Head next is " << head->next << endl;
  cout << "Tail next is " << tail->next << endl;
}



 