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
        cout << "this->data = " << this->data << endl;
        // if(this->next != NULL) {
        //     delete next;
        //     this->next = NULL;
        // }
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
   void insertAtTail(Node* &tail, int d)
   {
    // creating a Node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
   }

   void inserAtHead(Node* &head, int d)
   {
    // Creating new node
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
   }

   void insertAtPosition(Node* & head, int position, int d) {
    //insert at Start
    // if(position == 1) {
    //     insertAtHead(head, d);
    //     return;
    // }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    // if(temp -> next == NULL) {
    //     insertAtTail(tail,d);
    //     return ;
    // }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
    cout <<endl;
    // cout << "Head is = " <<  head->data;
}
  
  void deleteNode(int position, Node* &head, Node* &tail)
{

  // deleting first Node or starting node
  // cout << "Head = " << head->data << endl;
  // cout << "tail = " << tail->data << endl;

  if(position == 1)
  {
  

    Node* temp = head;
    head = head->next;

    // doing memory free 
    temp->next = NULL;
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
   if(position == 5)
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
int main()
{
    Node* node1 = new Node(12);


    Node* head = node1;
    Node* tail = node1;
    insertAtTail(tail, 15);
    insertAtTail(tail, 19);
    inserAtHead(head, 10);
    insertAtPosition(head, 3, 20);
    insertAtPosition(head, 2, 21);
    print(head);
    deleteNode(2, head, tail);
    print(head);

    cout << "head is pointing = " << head->data << endl;
    cout << "tail is pointing = " << tail->data << endl;



    // inserAtHead(head, 31);
    // insertAtTail(tail, 50);
    // print(head);
    
    

    // print(head);
    // cout << "Node data is = " << node1->data << endl;
    // cout << "Node next is = " << node1->next << endl;

    // cout << "node1 is a = " << node1 << endl;
    // inserAtHead(head, 15);
    // inserAtHead(head, 34);
}




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

// };
// int main()
// {
//     Node* node1 = new Node(12);
//     cout << "Node data is = " << node1->data << endl;
//     cout << "Node next is = " << node1->next << endl;
// }




