#include<iostream>
#include<map>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    // constructor 

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
        cout << temp->data <<" ";
        temp = temp->next;
    }
    cout << endl;
}
bool isCycle(Node* &head)
{
    Node* temp = head;
    map<Node*, bool> visited;

    while(temp != NULL)
    {
        // pahle se hi loop ho tab ye chalega
        if(visited[temp] == true)
        {
            cout << "Loop is already present" << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    // temp->next = head->next;
    return false;

}
int main()
{
    Node* node1 = new Node(12);
    Node* head = node1;
    insertAtHead(head, 10);
    insertAtHead(head, 8);
    insertAtHead(head, 6);
    insertAtHead(head, 4);
    print(head);
    head->next = head;
    if(isCycle(head))
    {
        cout << "List is cylic" << endl;
    }
    else
    {
        cout << "Not cyclic" << endl;
    }
    print(head);
  


}