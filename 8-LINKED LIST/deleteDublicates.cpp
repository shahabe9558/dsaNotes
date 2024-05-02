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
void insertAtHead(Node* &head, int d)
{
       Node* temp = new Node(d);
       temp -> next = head;
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
// TC = o(n)
// SC = o(1)
void deleteNodefromSortedList(Node* head)
{
    if(head == NULL)
    {
        cout << "List is empty" ;
        return ;
    }

    Node* curr = head;
     while(curr != NULL)
    {
        // if equlal

        if( (curr -> next != NULL) && curr -> data == curr -> next -> data) 
        {
            Node* next_next = curr ->next -> next;
            Node* nodeToDelete = curr -> next;
            delete(nodeToDelete);
            curr->next= next_next;
        }
        else //not equal
        curr = curr->next;
     }
}
void deleteNodeRandomList(Node* &head)
{

    Node* curr = head;
    while(curr != NULL && curr->next != NULL)
    {
        
        Node* temp = curr->next;

        while(temp != NULL && temp->next != NULL)
        {
        //  cout << "hi";
        if(curr-> data == temp->data)
        {
            Node* next_next = temp->next;
            Node* nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = next_next;
        }
        else
        {
            // cout << curr->data << " ";
            curr = curr->next;
            temp = curr->next;
            
        }
             
        }
    }


}

 void removeDuplicates(Node* &head) 
    {
        map<int, bool> visited;
        Node* temp = head;
        visited[temp->data] = true;
        // cout << "temp data out = " << temp->data << endl;
        while(temp->next != NULL && temp != NULL)
        {
            if(visited[temp->next->data] == true)
            {
                // delete kr do 
                Node* next_next = temp->next->next;
                Node* nodeTodelete = temp->next;
                delete nodeTodelete;
                temp->next = next_next;
                
            }
            else
            {
                visited[temp->next->data] = true;
                temp = temp->next;
            }
        }
    }
    
    void removeDuplicates2(Node* &head)
    {
        map<Node*, bool> visited;

        Node* temp = head;
        visited[temp] = true;
        while(temp != NULL && temp->next != NULL)
        {
            if(visited[temp->next] == true)
            {
                Node* next_next = temp->next->next;
                Node* nodetoelet = temp->next;
                delete(nodetoelet);
                temp->next = next_next;
            }
            else{
                visited[temp->next] == true;
                temp = temp->next;
            }
        }
    }
    
int main()
{
       Node* node1 = new Node(1);
       Node* head = node1;
    insertAtHead(head, 2); 
    insertAtHead(head, 2); 
    insertAtHead(head, 5); 
    // insertAtHead(head, 2); 
    // insertAtHead(head, 10); 
    // insertAtHead(head, 6); 
    // insertAtHead(head, 7); 
    // insertAtHead(head, 7); 
    
    print(head);
    cout << endl;
    // deleteNodeRandomListAgain(head); 
    // removeDuplicates(head);
    // removeDuplicates2(head);
    deleteNodeRandomList(head);

    // deleteNodeRandomList(head);  

    // deleteNodefromSortedList(head);
    print(head); 
   

}