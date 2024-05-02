#include <iostream>
using namespace std;
class Animal {
    public:
 int age;
 int weight;

 public:
 void speak()
 {
    cout << "speaking " << endl;
 }

};
class Dog: public Animal{

};
class GermanShepherd: public Dog {

};
int main()
{
GermanShepherd d1;
 d1.speak();
 cout << d1.age << endl;
 
}