#include<iostream>
#include<queue>
using namespace std;
class CIRCULARQUEUE{
    public:

    int *arr;
    int size;
    int front;
    int rear;
  CIRCULARQUEUE(int n)
  {
    size = n;
    arr = new int[size];
    front = rear = -1;
  }
  void enqueue(int data)
  {
    // condition for full 

    if((front == 0 && rear == size) || (rear == (front-1) %(size-1)))
    {
        cout << "Queue is full" << endl;
    }
    // pushing the first elemnt 

    else if(front == -1)
    {
        front = rear = 0;
        arr[rear] = data;
        rear++;
    }

    // for making circular 

    else if(rear == size && front != 0)
    {
        rear = 0;
        arr[rear] = data;
        rear++;
    }
    else{
        arr[rear] = data;
        rear++;

    }
  }
  void dequeue()
  {
    // chek for empty
    if(front == -1)
    {
      cout << "Queue is empty" << endl;
    }
    if(front == rear) // single element hai 
    {
        front = rear = -1;
    }
    else if(front == size)
    {
      front = 0; // maintain cycle
    }
    else{
      arr[front] = -1;
      front++;
    }
  }
  int frontElement()
  {
    if(front == size)
    {
      front = 0;
    }
    if(front == -1)
    return 0;
    else
    return arr[front];
  }
};
int main()
{
    CIRCULARQUEUE q(4);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);   
    q.enqueue(4); 
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue(1);
    cout << "front is = " << q.frontElement();
 

}