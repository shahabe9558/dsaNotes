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
    ~Node()
    {
        int value = this->data;
        // cout << "next is " << next;
        if(this->next != NULL)
        {
            // cout << "next is " << next;
            delete next;
            next = NULL;
        }
        cout <<"Merory is free for node with data " <<value << endl;
    }

};
void insertNode(Node* &tail, int element, int d)
{
    // when list is empty 
    if(tail == NULL) 
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    // when list is not empty and element is found
    else{
        Node* curr = tail;

        // ab element tak pahuchna hai
        while(curr->data != element)
        {
            curr = curr->next;
        }
        // elemnt mil gaya

        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;

    }

}

void print(Node* tail)
{
    Node* temp = tail;
    //  if tail list is empty 
    if(tail == NULL)
    {
        cout <<"List is empty" <<endl;
        return ;
    }
//    if list is not empty 
    do{
        cout << tail->data <<" ";
        tail = tail->next;
    }while(tail != temp);
}

void deleteNode(Node* tail, int value)
{
   // when list is empty 
   if(tail == NULL)
   {
    cout <<"List is already empty" <<endl;
    return ;
   }
   else{
    Node* prev = tail;
    Node* curr = prev->next;
    while(curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
   }
   cout <<"tail data is" << tail->data <<endl;
}
int main()
{
     Node* tail = NULL;
     
     insertNode(tail, 2, 12);
     insertNode(tail, 12, 13);
     insertNode(tail, 13, 14);
     insertNode(tail, 14, 15);
     insertNode(tail, 14, 10);
     print (tail);
     cout << endl;
     deleteNode(tail, 12);
     print(tail);
}