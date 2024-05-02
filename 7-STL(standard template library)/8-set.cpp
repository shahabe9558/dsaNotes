#include <iostream> 
#include <set>
using namespace std;
int main()
{
    // IT IGNORES THE REPEATED VALUES IN THE SET 
      
    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    for(auto i:s)
    {
        cout <<i <<" ";
    }
    cout <<endl;


    // CHECKING PRESENT OR ABSENT 

    cout << "Present or not => " <<s.count(-1);
}