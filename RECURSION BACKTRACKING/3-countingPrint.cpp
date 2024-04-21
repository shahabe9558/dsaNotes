// #include<iostream>
// using namespace std;
// void printNum(int n)
// {
//     // base case 
//     if(n == 0)
//     return ;


//     printNum(n-1);
//     cout << n <<endl;
// }
// int maain()
// {
//     int n;
//     cout <<"ENter the number" <<endl;
//     cin >> n;
//     printNum(n);

// }


















#include <iostream>
using namespace std;
void countNum(int n)
{
    if(n == 0)
    return ;

    cout << n << endl;
    countNum(n-1);
  
}
int main()
{
    int num;
    cout <<"Enter the number" << endl;
    cin >> num;
    countNum(num); 
}