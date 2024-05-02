// counting the nuumber in ascending order 
#include <iostream> 
using namespace std;
void printNum(int n)
{
    // base case 
    if(n == 0)
    {
        return ;
    }
    printNum(n - 1);
    cout << n << endl;
}
int main()
{
    int n = 4;
    printNum(n);
}

// counting the number in decending order 
// #include <iostream> 
// using namespace std;
// void printCnt(int n)
// {
//     // base case 
//     if(n == 0)
//     {
//         return ;
//     }
//     cout << n << endl;
//     printCnt(n - 1);
// }
// int main()
// {
//     int num = 4;
//     printCnt(num);
// }