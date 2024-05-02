#include <iostream>
#include <stack>
using namespace std;
int main()
{
    // LAST IN FIRST OUT (LIFO)
    
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.top();
    s.pop();
    cout << s.top();
    cout << s.size();
    cout <<s.empty();


    cout <<endl;
}
