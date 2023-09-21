#include<iostream>
#include<stack>
using namespace std;
// TC = O(N*N)
void sortedInsert(stack<int> &s, int num)
{
    // base case 
    if(s.empty() || s.top() < num)
    {
        s.push(num);
        return ;
    }
    int num2 = s.top();
    s.pop();
    sortedInsert(s, num);
    s.push(num2);

}
void sortStack(stack<int> &s)
{
    // base case 
    if(s.empty())
    {
        return ;
    }
    int num = s.top();
    s.pop();
    sortStack(s);

    sortedInsert(s, num);
}
int main()
{
    stack<int> s;
    s.push(5);
    s.push(-2);
    s.push(9);
    s.push(-7);
    s.push(3);
    sortStack(s);

   for(int i =0; i<5; i++)
   {
    cout << s.top() << " ";
    s.pop();
   }

}