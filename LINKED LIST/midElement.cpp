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
// void getLenghtofList(Node* &head)
// {
//     Node* temp = head;
//     int lenOflist = 0;

//     while(temp != NULL)
//     {
//         temp = temp->next;
//         lenOflist++;
//     }
//     cout << endl;
//     int mid = (lenOflist/2) + 1;

//     cout << "Mid is at " << mid << endl;
// }


// void midElement(Node* &head)
// {
//     Node* temp = head;
//     int len = 0;
//     while(temp != NULL)
//     {
//         temp = temp -> next;
//         len++;
//     }
//     int mid = len/2;
//     int cnt = 0;
//     Node* temp2 = head;
//     while(cnt < mid)
//     {
//         temp2 = temp2->next;
//         cnt++;
//     }
//     cout <<"Mid Element is " << temp2->data << endl;


// }

// second approach of finding mid element 
void midElement(Node* &head)
{
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next; 
        }
        slow = slow->next;
    }
    cout << "Mid Element is " <<slow->data;
}
int main()
{
    Node* node1 = new Node(12);
    Node* head = node1;

    insertAtHead(head, 10);
    insertAtHead(head, 8);
    insertAtHead(head, 6);
    insertAtHead(head, 4);
    // insertAtHead(head, 2);
    // insertAtHead(head, 0);
    midElement(head);
    // getLenghtofList(head);

}