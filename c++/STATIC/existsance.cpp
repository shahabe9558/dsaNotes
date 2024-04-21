#include<iostream>
using namespace std;
class Shared{
    public:
    static int a;
    // void set(int i) {a = i;}
};
int Shared :: a;
int main()
{
    Shared :: a = 99;
    cout << "Shared val is = " << Shared::a << endl;
    Shared obj;
    // obj.set();
    cout << "Update is = " << obj.a; 
}