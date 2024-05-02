#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    //constructor
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
    while(temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// Node* kGroupReverse(Node* &head, int k)
// {
//     Node* next = NULL;
//     Node* prev = NULL;
//     Node* curr = head;
//     int cnt = 0;
//     while(curr != NULL && cnt < k)
//     {
//         next = curr->next;
//         curr->next = prev;
//         prev = curr;
//         curr = next;
//         cnt++;
//     }

//         if(next != NULL && )
//         {
//             head->next = kGroupReverse(next, k);
//         }
//       return prev;

// }
Node* kGroupReverse2(Node* &head, int k)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = head;
    int cnt = 0;
    while(curr != NULL && cnt <k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        cnt++;
    }
    if(next != NULL)
    {

    head->next = kGroupReverse2(next, k);
    }
    return prev;
}
bool isCircular(Node* &head)
{
    Node* temp = head->next;
    while(temp != NULL && temp != head)
    {
        temp = temp->next;
    }
    if(temp == NULL)
    {
        return false;
    }
    if(temp == head)
    {
        return true;
    }


}
int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    insertAtHead(head, 2);
    insertAtHead(head, 4);
    insertAtHead(head, 5);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    insertAtHead(head, 8);
    kGroupReverse2(head, 2);
    print(head);

    // bool ans = isCircular(head);
    // if(ans)
    // {
    //     cout << "It is a circular";
    // }
    // else{
    //     cout <<"Not circular";
    // }

     // Node* temp = kGroupReverse(head, 3);
    // print(temp);

}