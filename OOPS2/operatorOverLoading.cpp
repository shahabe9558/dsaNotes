#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    int c;
    void operator+ (A &obj)
    {
        // cout << this->a <<endl;
        // cout << this->c <<endl;
        // cout << this->b <<endl;

        
        // cout << obj.a <<endl;
        // cout << obj.b <<endl;

        int value1 = this->a;
        int value2 = obj.b;
        cout << "Output = " << value1 - value2 << endl;
    }


};
int main()
{
    A obj1, obj2;
    obj1.a = 8;
    obj1.c = 9;
    obj2.b = 1;
    obj1 + obj2;

}