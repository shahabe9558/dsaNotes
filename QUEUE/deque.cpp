#include<iostream>
#include<queue>

using namespace std;
int main()
{
    deque<int> d;
    d.push_front(13);
    d.push_back(15);

    cout << "Front element is = " <<  d.front() << endl;
    cout << "Back element is = " <<  d.back() << endl;

   
    d.pop_front();
    d.pop_back();

    cout << "Front element is = " <<  d.front() << endl;
    cout << "Back element is = " <<  d.back() << endl;

    cout << "Is empty " << d.empty() << endl;
}