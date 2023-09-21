#include<iostream>
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

   //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};
 void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

 }
 void inserAtHead(Node* &head, int d)
   {
    // Creating new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
   }
   
//    TC = O(n), SC = O(1)

   void sort012(Node* &head)
   {
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        if(temp->data == 0)
        zeroCount++;
        else if(temp->data == 1)
        oneCount++;
        else if(temp ->data == 2)
        twoCount++;
        temp = temp->next; 
    }
    temp = head;
    while(temp != NULL)
    {
        if(zeroCount != 0)
        {
           temp->data = 0;
           zeroCount--;
        }
        else if(oneCount != 0)
        {
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 0)
        {
            temp ->data = 2;
            twoCount--;
        }
        temp = temp->next;

    }
   }

   // if replacement is not allowed then creates dummy nodes;

   void insertAtTail(Node* &tail, Node* &curr)
   {
    tail->next = curr;
    tail = curr;
   }


   void sortingByummyNodes(Node* &head)
   {
    // creating 3 link list using dummy nodes 

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    while(curr != NULL)
    {
        int value = curr->data;

        if(value == 0)
        {
            insertAtTail(zeroTail, curr);
        }
        else if(value == 1)
        {
            insertAtTail(oneTail, curr);
        }
        else if(value == 2)
        {
            insertAtTail(twoTail, curr);
        }
        curr = curr->next;
    }
    // merging created three link list 

    // first list is not empty 
    if(oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;

    }
    // list is empty 
    else{
        zeroTail->next = twoHead->next;

    }
    oneTail->next = twoHead->next;
    twoTail->next = NULL;
    head = zeroHead->next;
    // delete(zeroHead);
    // delete(oneHead);
    // delete(twoHead);
   }

   int main()
   {
    Node* node1 = new Node(0);
    Node* head = node1;

    inserAtHead(head, 2);
    inserAtHead(head, 1);
    inserAtHead(head, 2);
    inserAtHead(head, 1);
    // sort012(head);          // TC = O(n), SC = O(1)
    sortingByummyNodes(head); // TC = O(n), SC = O(1)
    print(head);

   }