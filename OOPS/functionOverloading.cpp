// Types of polymorphism 
// 1- Run Time polymorphism or ddynamic poly
// 2- Compile Time polymorphism or staatic poly
// Types of Compile Time polymorphism
// 1-Function Overloading
// 2-operator overloading

#include<iostream>
using namespace std;
class Human{
    public:

   
// default arguments

  int sayHello(int x, int y, int z = 0, int a = 0)
   {
    return (x + y + z + a);
   }


   // diff types of argument
//     void sayHello(int n)
//    {
//     cout <<"Person is saying hello with first class" << endl;
//    }
//    void sayHello(char ch)
//    {
//     cout <<"Person is saying hello with second class" << endl;
//    }

// diff number of argument
//    void sayHello(int n)
//    {
//     cout <<"Person is saying hello with first class" << endl;
//    }
//    void sayHello()
//    {
//     cout <<"Person is saying hello with second class" << endl;
//    }

};
int main()
{
   Human obj;
   cout << obj.sayHello(3,5) << endl;
   cout << obj.sayHello(3,5,6) << endl;
   cout << obj.sayHello(3,5, 1,2) << endl;


   //obj.sayHello('3');
   //obj.sayHello();
}
