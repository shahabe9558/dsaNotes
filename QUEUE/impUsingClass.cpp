#include<iostream>
using namespace std;
class QUEUE{
    public:
    int rear;
    int front;
    int * arr;
    int size;

    // constructor 
    QUEUE()
    {
        size = 10001;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    bool isEmpty()
    {
       if(front == rear)
       return true;
       else
       return false;
    }
    void enqueue(int num)
    {
        if(rear == size)
        {
          cout <<"Queue is full " << endl;
        }
        else{
            arr[rear] = num;
            rear++;
        }
    }
    void dequeue()
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
    int front1()
    {
        if(front == rear)
        {
            cout << "Kuch nahi hai" << endl;
        }
        else
        { 
            return arr[front];
        }
    }
};
int main()
{
   QUEUE q;
   q.enqueue(2);
   q.enqueue(2);
   q.dequeue();
   cout << q.front1();
   cout << "empty = " << q.isEmpty();
}