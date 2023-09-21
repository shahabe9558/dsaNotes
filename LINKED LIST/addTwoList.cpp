#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node* next;

   Node(int d)
   {
    this->data = d;
    this -> next = NULL;
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
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void reverse(Node* &head)
{
    Node* curr = head;
    Node* prev = NULL;
    while(curr != NULL)
    {
        Node* forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
// Node* add(Node* &head1, Node* &head2)
// {
//     int carry = 0;
//     Node* ansHead = NULL;
//     Node* ansTail = NULL;
//     while(head1 != NULL && head2 != NULL)
//     {
//         int sum = head1->data + head2->data + carry;

//         int digit = sum % 10;

//         insertAtHead(ansHead, digit);
        
//         carry = carry/10;
//         head1 = head1->next;
//         head2 = head2->next;
//     }
//     return ansHead;
// }
Node* addtwoLinkList(Node* &head1, Node* &head2)
{
    // reverse linked list 

    head1 = reverse(node1);
    head2 = reverse(node2);

    Node* ans = add(head1, head2);

    reverse(ans);

    print(ans);


}
int main()
{
    Node* head1 = new Node(6);
    Node* head2 = new Node(7);

    insertAtHead(head1, 4);
    insertAtHead(head1, 2);
    insertAtHead(head2, 5);
    insertAtHead(head2, 3);
    print(head1);
    print(head2);
    addtwoLinkList(head1, head2);

}