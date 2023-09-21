#include <iostream>
#include <queue>
using namespace std;
int main()
{
//   FIRST IN FIRST OUT (FIFO)
 
 queue<string> q;
 q.push("Shahabe");
 q.push("Nawaz");
 q.push("Alam");
 
 cout << q.front() <<endl;
 q.pop();
 cout << q.front() <<endl;

}