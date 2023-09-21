#include<iostream>
#include<stack>
using namespace std;

void pushAtButtom(stack<int> &s, int x)
{
   if(s.empty())
   {
    s.push(x);
    return ;
   }
   int num = s.top();
   s.pop();

   pushAtButtom(s, x);
   s.push(num);

}
// using namespace std;
int main()
{
  stack<int> s;


  s.push(8);
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(2);
  int x = 9;
  // pushAtButtom(s, x);
  for(int i=0; i<5; i++)
  {
    cout << s.top() << " ";
    s.pop();
  }
}