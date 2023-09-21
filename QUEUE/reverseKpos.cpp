#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void reverseKposition(queue<int> &q, int k)
{
    stack<int> s;

    // treavers k elemt 
    for(int i =0; i<k; i++)
    {
        int element = q.front();
        s.push(element);
        q.pop();
    }
    while(!s.empty())
    {
        int value = s.top();
        q.push(value);
        s.pop();
    }
    int t = q.size()-k;
    while(t--)
    {
        int elemnt = q.front();
        q.push(elemnt);
        q.pop();
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k = 4;
    reverseKposition(q, k);
    for(int i =0; i<5; i++)
    {
        cout << q.front() << " ";
        q.pop();
    }
}