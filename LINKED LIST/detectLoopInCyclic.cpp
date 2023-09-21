#include<iostream>
#include<map>
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
void inserAtPosition(Node* &tail, int elememnt, int d)
{
    // agar elemnt nhi hai tab 
    if(tail == NULL)
    {
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    // elemnt hai tab
    else{
        Node* curr = tail;

        while(curr->data != elememnt)
        {
            curr = curr->next;
        }
        // element found
        Node* temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }  

}
void print(Node* &tail)
{
    // agar list empty hai tab 
    Node* temp = tail; 
    if(tail == NULL)
    {
        cout << "List is empty " << endl;
        return ;
    }
    do{
       cout << tail->data << " "; 
       tail = tail->next;

    }while(tail != temp);
    cout << endl;

}
// time and space complexity is == O(n);
bool isCyclic(Node* &tail)
{
  Node* temp = tail;
  map<Node*, bool> visited;

  while(temp != NULL)
  {
    // pahle se maujood hai tab 

    if(visited[temp] == true)
    {
        cout << "Loop is already present" << endl;
        return true;
    }
    visited[temp] = true;
    temp = temp->next;
  }
  return false;

}
// TC = O(n), SC = O(1)

Node* floydCycleAlgo(Node* &head)
{
    if(head == NULL)
    {
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while(slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if(fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast)
        {
            return slow;
        }
    }
    return NULL;

}
Node* startNodeofLoop(Node* &head)
{
    if(head == NULL)
    return NULL;
    Node* intersection = floydCycleAlgo(head);
    if(intersection == NULL)
    return NULL;
    Node* slow = head;
    while(slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
    
}

void removeLoop(Node* &head)
{
    Node* startOfLoop = startNodeofLoop(head);

    Node* temp = startOfLoop;
    while(temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;

}
int main()
{
    Node* tail = NULL;
    inserAtPosition(tail, 2, 12);
    inserAtPosition(tail, 12, 14);
    inserAtPosition(tail, 14, 16);
    inserAtPosition(tail, 16, 18);
    print(tail);

    

    removeLoop(tail);


    // Node* sol = startNodeofLoop(tail);

    // cout << sol << endl;
    // cout << sol->data << endl;






//    if(floydCycleAlgo(tail) != NULL)
//     {
//         cout << "List is cyclic" << endl;
//     }
//     else{
//         cout << "List Not Cyclic" << endl;
//     }







    if(isCyclic(tail))
    {
        cout << "List is cyclic" << endl;
    }
    else{
        cout << "List Not Cyclic" << endl;
    }
}