

// void deleteNode(int position, Node* &head, Node* &tail)
// {

//   // deleting first Node or starting node
//   // cout << "Head = " << head->data << endl;
//   // cout << "tail = " << tail->data << endl;

//   if(position == 1)
//   {
//     Node* temp = head;
//     temp->next->prev = NULL;
//     head = temp->next;
//     temp->next = NULL;
//     // doing memory free 
//     delete temp;
//   }
//    // deleting last or any node from the linked list  
//    Node* curr = head;
//    Node* pre = NULL;

//    int cnt = 1;
//    while(cnt < position)
//    {
//     pre = curr;
//     curr = curr->next;
//     cnt++;
//    }
//    if(position == 4)
//    {
//     pre->next = curr->next;
//     tail = pre;
//     curr->next = NULL;
//     delete curr;

//    }
//    else{
    
//       pre->next = curr->next;
//       curr->next = NULL;
//       delete curr;

//    }
// }
#include <iostream>
using namespace std;
class Node{
    public :
    int data;
    Node * next;
    Node * prev;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node* &head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node* &tail,  int d)
{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(Node* &head, Node* &tail, int position, int d)


{
    if(position == 1)
    {
        insertAtHead(head, d);
        return;
    }
    // position tak pahuchna hoga
    Node* temp = head;
    int cnt = 1;
    while(cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }
    // means you are at last pos so delete a=the last element form the list 
    if(temp->next == NULL)
    {
        insertAtTail(tail, d);
        return ;
    }
    // ap to insert middle me hi karna hoga 
    Node* nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next->prev = nodeToinsert;
    temp->next = nodeToinsert;
    nodeToinsert->prev = temp;
}
int size(Node* &head)
{
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 8);
    insertAtHead(head, 6);
    insertAtHead(head, 4);
    insertAtTail(tail, 12);
    insertAtPosition(head, tail, 4, 100);
    cout << "Size of var " << size(head) << endl;
    cout << head->data << endl;
    cout << tail->data << endl;
    print(head);
}
