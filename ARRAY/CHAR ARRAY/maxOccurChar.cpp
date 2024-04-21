#include<iostream>
using namespace std;

// TC & SC  = O(N);

char getMaxOccur(string s)
{
    // SC = O(1)  DUE TO CONSTANT 26

    int arr[26] = {0};

    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];

        int number = 0;

        number = ch - 'a';

        arr[number]++;
    }

    int ans = 0;
    int maxi = -1;
    // TC AND SC = O(1)

    for(int i =0; i<26; i++)
    {
        if(maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    int maxINdexNumber = ans;

    maxINdexNumber = 'a' + ans;

    return maxINdexNumber;
}
int main()
{
    string str = "aabbccc";
    cout <<"Max occuring char is = " << getMaxOccur(str);
}