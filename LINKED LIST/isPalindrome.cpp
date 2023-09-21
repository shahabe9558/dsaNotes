#include<iostream>
#include<vector>
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

void insertAtHead(Node* &head, int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(Node* &head)
{
    Node* temp = head;
    {
        while(temp != NULL)
        {
            cout << temp->data <<" ";
            temp = temp->next;
        }
        cout << endl;
    }
}
// bool checkPalindrome(vector<int> arr) 
// {
//     int s = 0;
//     int e = arr.size()-1;
//     while(s <= e)
//     {
//         if(arr[s++] != arr[e--])
//         return false;
//     }
//     return true;
// }
// bool isPalindrome(Node* &head) // TC AND SC IS = O(N)
// {
//     vector <int> arr;

//     Node* temp = head;

//     while(temp != NULL)
//     {
//        arr.push_back(temp->data);
//        temp = temp ->next;
//     }

//     return checkPalindrome(arr);  // TC AND SC IS = O(N)
// }
Node* getMid(Node* &head)
{
    Node* slow = head;
    Node* fast = head->next;
    while(fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    return slow;
}
Node* reverse(Node* &head)
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
    return head;
}
bool isPalindrome2(Node* &head)
{
    if(head == NULL && head->next == NULL)
    return true;

    Node* middle = getMid(head);

    Node* temp = middle->next;

    // middle->next = reverse(temp);  // it is optional

    Node* head1 = head;
    Node* head2 = middle->next;

    while(head2 != NULL)
    {
       if(head1->data != head2->data)
       {
        return false;
       }
       head1 = head1->next;
       head2 = head2->next;
    }
    middle->next = reverse(temp);
    return true;
}
int main()
{
    Node* node1 = new Node(1);
    Node* head = node1;
    insertAtHead(head, 2);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    print(head);
    if(isPalindrome2(head))
    cout << "Palindrome" << endl;
    else
    cout <<"Not palindrome" << endl;
    print(head);
}