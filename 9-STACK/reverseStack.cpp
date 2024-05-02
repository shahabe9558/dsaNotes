#include<iostream>
#include<stack>
using namespace std;

void pushButtom(stack<int> &s, int x)
{
   if(s.empty())
   {
    s.push(x);
    return ;
   }
   int num = s.top();
   s.pop();

   pushButtom(s, x);
   s.push(num);
}

void reverseStack(stack<int> &s)
{
    // base case 
    if(s.empty())
    {
        return ;
    }
    int num = s.top();
    s.pop(); 

    reverseStack(s);


    pushButtom(s, num);
}
int main()
{
    stack<int> s;
    s.push(7);
    s.push(1);
    s.push(2);
    s.push(5);
    s.push(9);

    reverseStack(s);
    for(int i=0; i<5; i++)
    {
        // int value = s.pop();  // not possible due to void function 
        cout << s.top() << " ";
        s.pop();
    }
}