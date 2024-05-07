#include <iostream> 
using namespace std;
class Stack{
   public:
   int size;
   int top;
   int *arr;
   // deinfing the constructor 
   Stack(int size)
   {
      this->size = size;
      this->top = -1;
      arr = new int[size];
   }
   void push(int ele)
   {
      if(size - top > 1)
      {
         top++;
         arr[top] = ele;
      }
      else{
         cout << "Stack is full" << endl;
      }
   }
   void pop()
   {
      if(top >= 0)
      {
         top--;
      }
      else{
         cout << "Stack is undeflow" << endl;
      }
   }
   int peak()
   {
      if(top >= 0)
      {
         return arr[top];
      }
      else{
         cout << "No element found" << endl;
      }
   }
   bool empty()
   {
      if(top < 0)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
   int sizeOf()
   {
      if(top >= 0)
      {
         return top + 1;
      }
      else{
         return 0;
      }
   }
};
int main()
{
   Stack s(5);
   s.push(1);
   s.push(2);
   s.push(3);
   s.push(4);
   s.push(9);
   cout << s.peak() << endl;
   cout << s.sizeOf() << endl;
   while(!s.empty())
   {
      cout << s.peak() << " ";
      s.pop();
   }
}



