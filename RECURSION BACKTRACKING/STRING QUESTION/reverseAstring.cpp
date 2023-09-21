#include<iostream>
using namespace std;
void reverseString(string &str, int i, int j)
{
    // base case 
    cout << "Call receive for = " << str;
    cout << endl;

    if(i > j)
    {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;
    reverseString(str, i, j);
}

int main()
{
    string str = "abcde";

    reverseString(str, 0, str.length()-1);
    cout << str;

}