#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {1,2,3,4,5};
    // definnig the iterator 
    vector<int> :: iterator ptr;

    // advance is used to specifed fun 
    for(ptr = v.begin(); ptr < v.end(); ptr++)
    {
        cout << *ptr << " ";
    }
}