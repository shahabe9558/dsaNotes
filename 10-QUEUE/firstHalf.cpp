#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void pushOneByOne(queue<int> q)
{
    stack<int> s;

    int stackSize = q.size()/2;
    while(stackSize != 0)
    {
       int val = q.front();
       s.push(val);
       q.pop();
       val = s.top();
       q.push(val);
       s.pop(); 
    }
}
int main()
{
  queue<int> q;
  q.push(11);
  q.push(12);
  q.push(13);
  q.push(14);
  q.push(15);
  q.push(16);
  q.push(17);
  q.push(18);
  pushOneByOne(q);
  for(int i =0; i<8; i++)
  {
   cout << q.front() << " ";
   q.pop();
  }
}