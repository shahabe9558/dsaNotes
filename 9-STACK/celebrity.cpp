#include<iostream>
#include<stack>
using namespace std;
bool knows(int arr[][3], int a, int b, int n)
{
    if(arr[a][b] == 1)
    return true;
    else 
    return false;
}
bool isCelebrity(int arr[][3], int n)
{
    stack<int> s;
    for(int i=0; i<n; i++)
    {
       s.push(i);
    }
    // popmtwo people to check 
    while(s.top() > 1)
    {
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();

        if(knows(arr, a, b, n))
        {
            s.push(b);
        }
        else{
            s.push(a);
        }
    }
    int ans = s.top();
    //  verify karenge ki ye ans hai ya nhi
    int zeroCount = 0; 
    for(int i=0; i<n; i++)
    {
        if(arr[ans][i] == 0)
        zeroCount++;
    }
    if(zeroCount != n)
    return 0;

    int oneCount =0;
    for(int i=0; i<n; i++)
    {
        if(arr[i][ans] == 1)
        oneCount++;
    }
    if(oneCount != n-1)
    return 0;
    return ans;
}
int main()
{
    int arr[3][3] = {{0, 1, 0}, {0,0,0}, {0, 1,0}};
    int people = 3;
    if(isCelebrity(arr, people))
    cout <<"Celebrity is present" << endl;
    else
    cout << "Celebrity not presetn" << endl;
}