#include <iostream> 
#define ROW 3
#define COL 4
using namespace std;
void spiralPrint(int arr[][COL]){
    int count = 0;
    int total = ROW * COL;
    int startRow = 0;
    int endRow = ROW - 1;
    int startCol = 0;
    int endCol = COL - 1;
    while(count < total)
    {
        // first row print kar do 
        for(int index = startCol; count < total && index <= endCol; index++)
        {
            cout << arr[startRow][index] << " ";
            count++;
        }
        startRow++;
        cout << endl;
        // last col print kar do bhaiya 
        for(int index = startRow; count < total && index <= endRow; index++)
        {
            cout << arr[index][endCol] << " ";
            count++;
        }
        endCol--;
        cout << endl;
        // last row print kara do bhiya  
        for(int index = endCol; count < total && index >= startCol; index--)
        {
            cout << arr[endRow][index] << " ";
            count++;
        }
        endRow--;
        cout << endl;
        for(int index = endRow; count < total && index >= startRow; index--)
        {
            cout << arr[index][startCol] << " ";
            count++;
        }
        startCol++;
        cout << endl;

    }
}
int main()
{
    int arr[ROW][COL] = {1,2,3,4,5,6,7,8,9,10,11,12};
    spiralPrint(arr);    
}