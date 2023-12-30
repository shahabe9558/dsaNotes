#include<iostream>
using namespace std;
int main()
{
    int arr[3][4];
    cout << "Enter the elements of 2-d array" << endl;
    for(int i=0; i<3; i++)
    {
        for(int j =0; j<4; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<3; i++)
    { 
        for(int j =0; j<4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
















// #include <iostream>
// // TAKING INPUT AND OUTPUT
// using namespace std;

// int main()
// {
//    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
//    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
//    int arr[3][4];

// //    Taking input as row wise

// cout << "Input the elements of 2d Array" <<endl;

// for(int i=0; i<3; i++)
// {
//     for(int j=0; j<4; j++)
//     {
//         cin >> arr[i][j]; 
//     }
// }

// /*
// //    Taking input as column wise

// cout << "Input the elements of 2d Array" <<endl;

// for(int i=0; i<4; i++)
// {
//     for(int j=0; j<3; j++)
//     {
//         cin >> arr[j][i]; 
//     }
// }
// */


// /*
// //PRINTING THE ELEMENTS OF AARAY row wise

// for(int i=0; i<3; i++)
// {
//     for(int j=0; j<4; j++)
//     {
//         cout << arr[i][j] << " ";
//     }
//     cout <<endl;
// }
// }
// */
// //PRINTING THE ELEMENTS OF AARAY column wise

// for(int i=0; i<4; i++)
// {
//     for(int j=0; j<3; j++)
//     {
//         cout << arr[j][i] << " ";
//     }
//     cout <<endl;
// }
// }

