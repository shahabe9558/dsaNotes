
// 2- reverse triangle 
#include<iostream>
using namespace std;
int main()
{
    int n;
     cout << "Enter the number of row tringle" << endl;
     cin >> n;
     for(int i=0; i<n; i++)
     {
       int leftSpace = i;
            while (leftSpace)
            {
                cout << " ";
                leftSpace--;
            }
       for(int j = i; j<n; j++)
       {
        cout << "*";
       }

        for(int k = 0; k<n-i-1; k++)
         {
            cout << "*";
         }
       cout << endl;
     }
}
