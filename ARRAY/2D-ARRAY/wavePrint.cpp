#include<iostream>
using namespace std;

// TC AND SC = O(N*M)

void wavePrint(int arr[][4], int nrow, int mcol)
{
   for(int col =0; col<mcol; col++)
   {
    if(col &1) // for odd coloum
    {
        // printing bottom to top

       for(int row = nrow-1; row >=0; row--)
       {
        cout << arr[row][col] << " ";
       }
    }
    else{
        // even or zero colom

        for(int row =0; row<nrow; row++)
        {
            cout << arr[row][col] << " ";
        }

    }
    
   }
}

void print(int arr[][4], int row, int col)
{
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    wavePrint(arr, 3, 4);

    // print(arr, 3, 4);
}



















// #include <iostream>
// using namespace std;
// void wavePrint(int arr[][4], int nrow, int mcol)
// {
//     for(int col = 0; col < mcol; col++)
//     {

//     if(col % 2 == 0)
//     {
//         for(int row = 0; row < nrow; row++) 
//         {
//             cout << arr[row][col] << " ";
//         }

//     }
//     else
//     {
//         for(int row = nrow-1; row >= 0; row--)
//         {
//             cout << arr[row][col] << " ";
//         }

//     }
//     }
// }
// int main()
// {
//     int arr[3][4];
//     cout <<"Enter the Elements of Array";
//     for(int i=0; i<3; i++)   
//     {
//         for(int j=0; j<4; j++)
//         {
//             cin >>arr[i][j];
//         }
//     }
//     wavePrint(arr, 3, 4);
//     // for(int i=0; i<3; i++)
//     // {
//     //     for (int j=0; j<4; j++)
//     //     {
//     //         cout <<arr[i][j] <<" ";
//     //     }
//     //     cout << endl;
//     // }
// }
// /*
// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> wavePrint(vector<vector<int> > arr, int nRows, int mCols)
// {
//     vector<int> ans;
    
//     for(int col=0; col<mCols; col++) {
        
//         if( col&1 ) {
//             //odd Index -> Bottom to top
            
//             for(int row = nRows-1; row>=0; row--) {
//                 //cout << arr[row][col] <<" ";
//                 ans.push_back(arr[row][col]);
//             }    
//         }
//         else
//         {
//             // 0 or even iondex -> top to bottom
//             for(int row = 0; row<nRows; row++) {
//                 //cout << arr[row][col] << " ";
//                 ans.push_back(arr[row][col]);
//             }
//         }   
//     }
//     return ans;
// }
// */