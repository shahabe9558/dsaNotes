#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;
     
    l.push_front(1);
    l.push_back(2);
    l.push_back(3);
    for(int i:l)
    {
        cout << i <<" ";
    }
    cout <<endl;

    // CPPYING IN NEW LIST 

    list<int> n(l);
     
    for(int i:n)
    {
        cout << i <<" ";
    }
    cout <<endl;
    

    // INITILIZING ALL ELEMENTS WITH 2
    
    
    list<int> C(5,2);
     
    for(int i:C)
    {
        cout << i <<" ";
    }
}