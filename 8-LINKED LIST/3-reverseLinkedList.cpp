#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    // creating a constructor

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

};
void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void print(Node* &head)
{
  Node* temp = head;
  if(temp == NULL)
  {
    cout <<"List is empty" << endl;
    return ;
  }
  while(temp != NULL)
  {
    cout << temp->data <<" ";
    temp = temp->next;
  }
}

Node* reverseLinkedList(Node* &head)
{
  // base case 
  if(head == NULL || head->next == NULL)
  {
    return head;
  }
  Node* chhotaHead = reverseLinkedList(head->next);
  head->next->next = head;

  head->next = NULL;
  
  return chhotaHead;
}

// using recursion or backtracking

// void reverseLinkedList(Node* &head)
// {
//   Node* prev = NULL;
//   Node* curr = head;
//   //  base case 
//   if(curr == NULL)
//   {
//     head = prev;
//     return ;
//   }
//   Node* forward = curr->next;
//   cout <<"forward is = " << forward->data <<endl;
//   reverseLinkedList(forward);
//   curr->next = prev;
// }


// using loop 
// void reverseLinkedList(Node* &head)
// {
//     Node* curr = head;
//     Node* prev = NULL;

//     while(curr != NULL)
//     {

//      Node* forward = curr->next;
//      curr->next = prev;
//      prev = curr;
//      curr = forward;
//     }
//     head = prev;
//     // cout <<"Prev is pointing to = " <<prev->data <<endl;
// }
int main()
{
    Node* node1 = new Node(9);
    Node* head = node1;

    insertAtHead(head, 8);
    insertAtHead(head, 7);
    insertAtHead(head, 6);
    insertAtHead(head, 5);
    // cout << head->data << endl;
    print(head);
    cout << endl;
    // cout << head->data << endl;
    cout << reverseLinkedList(head);
    
    cout << endl;
    cout << endl;
    cout << "Head data is " << head->data;
    print(head);


}