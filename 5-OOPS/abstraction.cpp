#include<iostream>
using namespace std;

// hiding implementation and showing relevant data only

class Abstraction{
    int a, b;
    public:
    void set(int x, int y)
    {
       a = x;
       b = y;
    }
    void display()
    {
        cout << "Value of a is = "<< a <<endl;
        cout << "Value of b is = "<< b <<endl;

    }
        
};
int main()
{
    Abstraction obj;
    obj.set(12,23);
    obj.display();

}