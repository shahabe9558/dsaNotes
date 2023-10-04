// 1-diamond printing
#include<iostream>
using namespace std;
int main()
{
    int n;
     cout << "Enter the number of row tringle" << endl;
     cin >> n;
     for(int i=0; i<n; i++)
     {
       int leftSpace = n-i-1;
            while (leftSpace)
            {
                cout << " ";
                leftSpace--;
            }
       for(int j = 0; j <=i; j++)
       {
        cout << "*";
       }

        for(int k = 0; k<i; k++)
         {
            cout << "*";
         }
       cout << endl;
     }


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

// 2- reverse triangle 
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//      cout << "Enter the number of row tringle" << endl;
//      cin >> n;
//      for(int i=0; i<n; i++)
//      {
//        int leftSpace = i;
//             while (leftSpace)
//             {
//                 cout << " ";
//                 leftSpace--;
//             }
//        for(int j = i; j<n; j++)
//        {
//         cout << "*";
//        }

//         for(int k = 0; k<n-i-1; k++)
//          {
//             cout << "*";
//          }
//        cout << endl;
//      }
// }
