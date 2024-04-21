// Stack using STL 
#include<iostream>
#include<stack>

using namespace std;
class Stack{
   public:
   int top;
   int size;
   int *arr;
   // creating a constructor 
   Stack(int size)
   {
      this->size = size;
      this->top = -1;
      arr = new int[size]; // creating dyanamically array 
   }
   void push(int element)
   {
      if(size-top > 1)
      {
         // cout << "top is = " << top << endl;
         // cout << "Size is = " << size << endl;
         top++;
         arr[top] = element; 
      }
      else
      {
         cout << "stack is overflow" << endl;
      }
   }
   void pop()
   {
      if(top >= 0)
      {
         top--;
      }
      else
      cout << "Stack is under flow" << endl;
   }
   int peak()
   {
      if(top >=0)
      {
         return arr[top];
      } 
      return 0;
   }
   bool isEmpty()
   {
      if(top < 0)
      return true;
      else
      return false;
   }
   int sizeOf()
   {
      if(top >= 0)
      {
        return top + 1;
      }
      else
      return 0;
   }
};
int main()
{
    Stack st(5);
    st.push(8);
    st.push(12);
    st.push(14);
    st.push(16);
    st.push(18);
    cout << st.sizeOf() << endl;

   //  st.pop();
   //  st.pop();
   //  st.pop();
   //  st.pop();
   //  st.pop();
   //  cout << st.sizeOf() << endl;         
   //  cout << st.isEmpty();








   // stack<int> s;
   // stack<int> s1;

   // s.push(33);
   // s.push(44);
   // s.push(55);
   // s.push(66);

   // s1.push(1);
   // s1.push(2);
   // s1.push(3);
   // // s1.push(4);

   // s.swap(s1); // swap the content 

   // cout << s.top() << endl;
   // cout << s.empty() << endl;
   // cout << s.size() << endl;

   // // cout << s.swap(66, 44) << endl; //  dekhna hai isko 
   
   
}