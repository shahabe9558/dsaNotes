#include<iostream>
using namespace std;
class Queue{
  public:
  int front;
  int rear;
  int size;
  int *arr;
  Queue()
  {
    size = 1000;
    arr = new int[size];
    rear = 0;
    front = 0;
  }
  bool isEmpty()
  {
    if(front == rear)
    {
      return true;
    }
    else{
      return false;
    }
  }
  void enQueue(int num)
  {
    if(rear == size)
    {
      cout << "Stack is full" << endl;
    }
    else{
      arr[rear] = num;
      rear++;
    }
  }
  void deQueue()
  {
    if(front == rear)
    {
      cout << "Queue is empty" << endl;
    }
    else{
      arr[front] = -1;
      front++;
      if(front == rear)
      {
        front = 0;
        rear = 0;
      }
    }
  }
  int peak()
  {
    if(front == rear)
    {
      cout << "Queue is empty" << endl;
    }
    else{
      return arr[front];
    }
  }
};
int main()
{
  Queue q;
  q.enQueue(1);
  q.enQueue(2);
  q.enQueue(3);
  q.deQueue();
  cout << q.peak() << endl;
  cout << q.isEmpty() << endl;
}