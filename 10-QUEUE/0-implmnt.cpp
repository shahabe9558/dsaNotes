#include<iostream>
#include<queue>
#include <deque>
using namespace std;

// it follow FIFO order 
// Types of queue 
// 1- Normal Queue 
// 2- Circular Queue 
// 3- Input Restricted queue 
//    i.e push_back, pop_front, and pop_back hoga
// 4- Output restricted queue 
//    i.e pop_front, push_back, push_front hoga
// 5- doubly ended queue 
//    i.e push_back, push_front, pop_back, pop_front hoga
int main()
{
    // queue<int> q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // cout << "size of queue = " << q.size() << endl;
    // q.pop();
    // cout << "size of queue = " << q.size() << endl;
    // cout << "Empty or not = " << q.empty() << endl;
    // cout << "front is = " << q.front();
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Front element is " << q.front() << endl;
    cout << "Back element is " << q.back() << endl;
    cout << "The size is " << q.size() << endl;
    cout << "Is empty " << q.empty() << endl;
    while(!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    while(!d.empty())
    {
        cout << d.front() << " ";
        d.pop_front();
    }
}