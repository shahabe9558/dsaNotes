#include<iostream>
using namespace std;
int main()
{
    cout << "Enter the amount " << endl;
    int amount;
    cin >> amount;
    int note100, note50, note20, note1;
    int num = 1;
    switch (num)
    {
    case 1:
        // finding 100 ka notes 
        note100 = amount / 100;
        amount = amount - note100*100;
        cout << "Hundread Note require = " << note100 << endl;


    case 2:
    // finding the 50 ka notes 
         note50 = amount / 50;
         amount = amount - note50*50;
         cout << "fifty Note require = " << note50 << endl;
    case 3:
         note20 = amount / 20;
         amount = amount - note20*20;
         cout << "twenty Note require = " << note20 << endl;


    case 4: 
         note1 = amount / 1;
         amount = amount - note1*1;
         cout << "one Note require = " << note1 << endl;
    }
 
return 0;
}