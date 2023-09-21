#include<iostream>
using namespace std;
void sayDigit(int n, string str[])
{
  // base case 
  if(n == 0)
  return ;
  int digit = n % 10;
  n = n / 10;
  sayDigit(n, str);
  cout << str[digit] << " ";
}

int main()
{
  string str[10] = {"Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  cout <<"Enter the number" <<endl;
  int n;
  cin >> n;
  sayDigit(n, str);

}
















// #include <iostream>
// #include <string>
// using namespace std;
// /*
// Note ->

// Recursive relation bad me aata hai to tail recursion hota hai
// Recursive relation pahle aata hai to head recursion kahlata hai

// */

// void printDigit(int number, string str[])
// {
//     if(number == 0) 
//     {
//         return ;
//     }
//     int digit = number % 10;
//     number = number / 10;

//     // cout << str[digit] << " "; // Tail recursion 

//     printDigit(number, str);
//     cout << str[digit] << " ";   // Head recursion 
// }


// int main()
// {
//     string str[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
//     int n;
//     cout << "Enter the number" << endl;
//     cin >> n;
//     printDigit(n, str);

// }
