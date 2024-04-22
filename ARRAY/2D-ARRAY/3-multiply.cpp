#include <iostream>
#define ROW1 2
#define COL1 2
#define ROW2 2
#define COL2 3
using namespace std;
int main()
{
    int m1[ROW1][COL1] = {{4,5}, {3, 2}};
    int m2[ROW2][COL2] = {{2,6,3}, {-3, 2, 4}};
    int m3[ROW1][COL2];
    for(int i = 0; i<ROW1; i++)
    {
        for(int j = 0; j<COL2; j++)
        {
            m3[i][j] = 0;
            for(int k = 0; k<COL1; k++){
                m3[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
    for(int i = 0; i<ROW1; i++)
    {
        for(int j = 0; j<COL2; j++)
        {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
}