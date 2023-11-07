// Negative number nikalne ke liye ~ ye bit reverse kar dega phir 2's nikal lo isko karne ke liye 1's nikal lo bit revese kar do phir + 1 kar do 2's nikalne ke liye

#include <iostream>
using namespace std;
int main()
{
    int a = 4, b = 6;

    // cout << "a & b = " << (a & b) << endl;
    // cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "~b = " << ~b << endl;
    // cout << "a ^ b = " << (a ^ b) << endl; // same number ka Xor karne par zero aataa hai and any number xor with zero get same number

    // a << b = a * 2 power b;  a >> b = a / 2 power b;
    // for big number left shift behave as -ve number

    // cout << "Right shift is " << (a << b) << endl;
    // cout << "Left shift is " << (a >> 2) << endl;
    // cout << "Left shift is " << (4 << 6) << endl;
    // cout << "Left shift is " << (4 << 6) << endl;
    // cout << "Left shift is " << (4 >> 6) << endl;
    // cout << "Left shift is " << (4 << 50) << endl;
}