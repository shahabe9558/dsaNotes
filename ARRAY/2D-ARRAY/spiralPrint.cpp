#include<iostream>
using namespace std;
void spiralPrint(int arr[][4], int nrow, int mcol)
{
    int count =0; 
    int total = nrow*mcol;
    int startingRow = 0;
    int endingRow = nrow-1;
    int startingCol = 0;
    int endingCol = mcol-1;

    while(count < total)
    {
        //prionting the first row

        for(int index = startingCol; count<total && index <= endingCol; index++)
        {
            cout << arr[startingRow][index] << " ";
            count++;
        }
        startingRow++;
        cout << endl;

        // printing ending coloum 

        for(int index = startingRow; count<total && index<=endingRow; index++)
        {
            cout << arr[index][endingCol] << " ";
            count++;
        }
        endingCol--;
        cout << endl;

        // printing the ending row 
        for(int index = endingCol; count <total && index >= startingCol; index--)
        {
            cout << arr[endingRow][index] << " ";
            count++;
        }
        endingRow--;
        cout << endl;

        for(int index = endingRow; count<total && index >=startingRow; index--)
        {
            cout << arr[index][startingCol];
            count++;

        }
        startingCol++;
        cout << endl;


    }
}
int main()
{
    int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int row = 3, col = 4;
    spiralPrint(arr, row, col);
}




















// #include <iostream>
// using namespace std;
// void spiralPrint(int arr[][4], int row, int col)
// {
//         int count = 0;
//         int totalElements = row*col;
//         int startingRow = 0;
//         int startingCol = 0;
//         int endingRow = row-1;
//         int endingCol = col-1;

//     while(count < totalElements)
//     {
//         for(int index = startingCol; count < totalElements && index <= endingCol; index++)
//         {
//             cout << arr[startingRow][index] << " ";
//             count++;   
//         }
//         startingRow++;
//         cout << endl;

//         for(int index = startingRow; count < totalElements && index <=endingRow; index++)
//         {
//             cout << arr[index][endingCol] << " ";
//             count++;
//         }
//         endingCol--;
//         cout << endl;

//         for(int index = endingCol; count < totalElements && index <=startingCol; index++)
//         {
//             cout << arr[endingRow][index] <<" ";
//             count++;
//         }
//         endingRow--;
//         cout << endl;

//         for(int index = endingRow; count < totalElements && index <= startingRow; index++)
//         {
//             cout << arr[index][startingCol] << " ";
//             count++;
//         }
//         startingCol++;
//         cout << endl;
    
//     }
// }
// int main()
// {
//     int arr[3][4];
//     cout << "Enter the element of matrix";
//     for(int i=0; i<3; i++)
//     {
//         for(int j=0; j<4; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     spiralPrint(arr, 3,4);
// }