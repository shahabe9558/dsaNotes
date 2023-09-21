#include<iostream>
#include<stack>

using namespace std;

void solve(stack<int> &s, int count, int n)
{
    // base case 
    if(count == n/2)
    {
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s, count+1, n);
    s.push(num);

}

void deleteMiddle(stack<int> &s, int n)
{
    int count = 0;
    solve(s, count, n);
}

int main()
{
   stack<int> s;
   s.push(10);
   s.push(20);
   s.push(30);
   s.push(40);
   s.push(50);
   s.push(60);


   deleteMiddle(s, 6);

   for(int i=0; i<6; i++)  
   {
    cout << s.top() << " ";
    s.pop();
   }
  
   cout << endl << s.size();
   
}