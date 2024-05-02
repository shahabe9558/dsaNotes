#include <iostream>
#include <string>
#include <stack>
using namespace std;
void sayDigit(int n, string str[]){
    stack<int> s;
    while(n != 0)
    {
        int digit = n % 10;
        s.push(digit);
        n = n / 10;
    }
    while(! s.empty())
    {
        cout << str[s.top()] << " ";
        s.pop();
    }
}
int main()
{
    string str[10] = {"Zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << "Enter the digit" << endl;
    int n;
    cin >> n;
    sayDigit(n, str);
}