#include <iostream>
using namespace std;
int main()
{
    // Creating 2D array dynamically

    // new int*[]  // creating a column in pointer form i.e int*

    // int int **arr = storing the pointer in arr variable

    int row;
    cout << "Enter the row of array";
    cin >> row;
    int col;
    cout << "Enter the col of array";
    cin >> col;

// CREATING A 2D ARRAY DYNAMICALLY 

    int **arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }
    
    // TAKING INPUT DYANAMICALLY

    cout << "Enter the elemnts of array" << endl;

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin >> arr[i][j];
        }
    }
   // PRINTING THE ELEMENTS DYAAMMICALLY


    cout << endl;

     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }

    // DELETING CREATED ARRAY 

    for(int i=0; i<row; i++)
    {
        delete [] arr[col];
    }

    delete [] arr;



   // Againg printing is not possible after deleting
   
     for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
    

      
}