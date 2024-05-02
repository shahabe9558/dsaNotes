#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void rverseQueue(queue <int> &q)
{
    stack<int> s;

    while(!q.empty())
    {
        int element = q.front();
        s.push(element);
        q.pop();
    }
    while(!s.empty())
    {
        int element = s.top();
        q.push(element);
        s.pop();
    }
}

int main()
{
    queue <int> r;

    r.push(1);
    r.push(2);
    r.push(3);
    r.push(4);
    r.push(5);

    rverseQueue(r);

    for(int i =0;  i<5; i++)
    {
        cout << r.front() << " ";
        r.pop(); 
    }
}