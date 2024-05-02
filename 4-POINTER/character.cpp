#include <iostream>
using namespace std;
int main()

{
    char ch[6] = "abcde";
    char *c = "abcde"; // risky hai bhai
    char ch[5] = "Alam";
    cout << ch << endl;
    char *c = &ch[0];
    cout << c;

    // char temp ='a';
    // char *d = &temp;
    // cout << d;
}