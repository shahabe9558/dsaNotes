#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;

    d.push_back(2);
    d.push_front(1);
    cout << "1st element is " << d.at(0) <<endl;
    cout << "2nd element is " << d.at(1) <<endl;
    cout << "Front element is " << d.front() <<endl;
    cout << "Back element is " << d.back() <<endl; 
    
    // ERASE OPERATION CAN BE PERFORMED

    d.erase(d.begin(), d.begin() + 1);
    cout << "1st element is " << d.at(0) <<endl;
    
    // cout << d.capacity(); // not define
}