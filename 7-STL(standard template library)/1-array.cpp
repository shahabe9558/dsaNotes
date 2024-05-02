#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> arr = {1,2,3,4,5};

    // FOR FINDING THE SIZE 

    cout << arr.size() << endl;

    // TO ACCESS THE ELEMENTS 

    cout << arr.at(0) << endl;

    // TO ACCESS THE FIRST ELEMENTS 

    cout << arr.front() <<endl;

    // TO ACCESS THE LAST ELEMENTS 

    cout << arr.back() <<endl;

    // TO CHECK THE ARRAY IS EMPTY OR NOT 

    cout << arr.empty() << endl;

    // arr.push_back(1);  // NOT POSSIBLE 

    // cout << arr.clear() << endl; // NOT POSSIBLE 
}