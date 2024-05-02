#include <iostream>
#define ROW 3
#define COL 4
using namespace std;
void wavePrint(int arr[ROW][COL])
{
    // i represent columm 
    for(int ncol = 0; ncol<COL; ncol++)
    {
        if(ncol & 1)
        {
            for(int j = ROW - 1; j >= 0; j--)
            {
                cout << arr[j][ncol] << " ";
            }
            cout << endl;
        }
        else{
            for(int j = 0; j<ROW; j++)
            {
                cout << arr[j][ncol] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[ROW][COL] = {
        {1,2,3,4},
        {5,6,7,8},
        {9, 10, 11, 12}
    };
    wavePrint(arr);
}