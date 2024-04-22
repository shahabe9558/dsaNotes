#include <iostream>
#include <string>
#define ROW 3
#define COL 4   
using namespace std;
// first dimention is optional while sencond is must 
string linearSearch(int arr[][COL], int k)
{
    string s1 = "Key is absent";
    for(int i = 0; i<ROW; i++)
    {
        for(int j = 0; j<COL; j++)
        {
            if(arr[i][j] == k)
            {
                string s = "Key is presnt";
                return  s;
            }
        }
    }
    return s1;
}
int main()
{
    // int arr[ROW][COL] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int arr[ROW][COL] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    int k = 19;
    cout << linearSearch(arr, k);
}