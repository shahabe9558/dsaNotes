#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(10);
    v.push_back(9);
    v.push_back(3);

    // APPLYING BINARY SEARCH 

    cout << binary_search(v.begin(), v.end(), 4);

    // LOWER BOUND and UPPER BOUND

    cout <<"lOWER B IS " << lower_bound(v.begin(), v.end(),5) -v.begin() <<endl;
    cout <<"upper  B IS " << upper_bound(v.begin(), v.end(),3) -v.begin() <<endl;

    // REVERSE A STRING 

    string str = "abcd";
    reverse(str.begin(), str.end());
    cout <<"Reverse string is => " <<str; 


    // RoTATING 

    rotate(v.begin(), v.begin() + 2, v.end());
    cout << " After rotating" <<endl;
    for(int i:v)
    {
        cout <<i << " ";
    }
    cout <<endl;


    // SORTING IN it is BASED ON INTROSODES (COMBINATION OF INSERION, QUICK AND HEAP SORT)

    sort(v.begin(), v.end());
    for(int i:v)
    {
        cout << i << " ";
    }
    

}