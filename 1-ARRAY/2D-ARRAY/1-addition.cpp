#include <iostream>
#define ROW 3
#define COL 4
using namespace std; 
int main()
{
    int arr[ROW][COL] = {{1,2,3,4}, {5,6,7,8}, {3,5,7,9}}, 
    arr2[ROW][COL] = {{1,2,3,4}, {5,6,7,8}, {3,5,7,9}},
    arr3[ROW][COL];
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            arr3[i][j] = arr[i][j] + arr2[i][j];
        }
    }
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
             cout <<  arr3[i][j] << " ";
        }
        cout << endl;

    }
}