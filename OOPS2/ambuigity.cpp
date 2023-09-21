#include<iostream>
using namespace std;
class A{
    public:
    void sayHello()
    {
        cout <<"A function is saying Hello" <<endl;
    }
};
class B{
    void sayHello()
    {
     cout <<"B function is saying Hello" <<endl;

    }
};
class C: public A, public B{


};
int main()
{
    // to resolve ambuigity we use :: (scope resolution)

    C obj1;
    // obj1.sayHello();
    obj1.A::sayHello();

}