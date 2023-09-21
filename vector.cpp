#include <iostream>
#include <array>
#include <vector>

using namespace std;
int main()
{   
    // initialize all vector with 1 
    vector <int> v(5,1);
    for(int i:v)
    {
        cout << i << " ";
    }
    cout <<endl;
    // copying  vector into another vector 
    vector <int> last(v);
    for(int i:last)
    {
        // last.at(0) = 2; not posiible i think 
        cout << i << " ";
    }
    /*
    // capacity() is memory allocated to var
    // size()  is element present
    vector<int> v;
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(0);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    // vector itself double the capacity

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size() << endl;
    cout << "Element at oth = " << v.at(0) << endl;
    cout << "Element at 1st = " << v.at(1) << endl;
    cout << "Element at 2nd = " << v.at(2) << endl;

    // program terminate due to out of range
    // cout << "Element at 3rd = " << v.at(3) <<endl;

    // front  and back element in vector
    cout << "Front = " << v.front() << endl;
    cout << "Back = " << v.back() << endl;

    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();
    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " " <<endl;
    }
    cout << " Before clear size = " << v.size() << endl;
    v.clear();
    cout << v.capacity();
    cout << " After clear size = " << v.size() << endl;

    */



    /*

    // Array implementation of standard template library
    array<int, 4> arr = {1,2,3,4};
    cout << arr.size() <<endl;
    for(int i =0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << arr.at(0) <<endl;
    // checking empty array or not

    cout <<"Empty or not" << arr.empty() <<endl;
    // finding first element in array

    cout << "Front Element in array = " << arr.front() <<endl;
    // findiing last element in array

    cout << "Last Element in array = " << arr.back() <<endl;

*/

    /*
        vector <int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        v.push_back(6);
        cout << v.size() <<endl;
        // implementing binary search to vector

        cout << binary_search(v.begin(), v.end(), 6) << endl;

        // implementing lower bound to vector
        cout << lower_bound(v.begin(), v.end(), 6)-v.begin() << endl;
        cout << upper_bound(v.begin(), v.end(), 6)-v.begin() << endl;

        int a = 3;
        int b = 4;
        cout << max(a,b) <<endl;
        cout << min(a,b) <<endl;
        swap(a,b);
        cout <<"a = "<< a << "b = "<< b <<endl;
        string d = "abcd";
        reverse(d.begin(), d.end());
        cout <<"Reverse string is = " << d <<endl;


        */

    /*
    // Initializing a dyanamic array (vector)

    // vector <char> cv(10);
    int i;
    vector<char> cv(26, 'x');

    // finding the size of the vector
    cout << "Size is = " << cv.size() << endl;

    //  assigning values to the vector
    for (int i = 0; i < cv.size(); i++)
    {
        cv[i] = i + 'a';
    }
    //  fetching value from vector

    for (i = 0; i < cv.size(); i++)
    {
       cout << cv[i] << " ";
    }

    //  expanding vector
    for (i = 0; i < cv.size(); i++)
    {
    cv.push_back(i + 10 + 'a');

    }

    //  inserting element into a vector

    cv.push_back('f');
    cout <<"Size update" << cv.size();
    */
}