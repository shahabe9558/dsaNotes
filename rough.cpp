#include<iostream>
#include<queue>
#include <stack>
using namespace std;
int main() {
   // stack<int> s;
   // s.push(1);
   // s.push(2);
   // s.push(3);
   // s.push(4);
   // s.push(5);
   // while(!s.empty())
   // {
   //    cout << s.top() << " ";
   //    s.pop();
   // }
   queue<int> q;
   q.push(1);
   q.push(2);
   q.push(3);
   q.push(4);
   q.push(5);
   while(!q.empty())
   {
      cout << q.front() << " ";
      q.pop();
   }
}