#include <iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout << "Speaking" <<endl;

    }
};
class Dog: public Animal {
  public:
 void speak() {
 cout << "Barking" <<endl; 

 }
};
int main()
{
  Animal d1;
  Dog d2;
  d1.speak();    
}
// There are two types of polymorphism 1- compile time , 2- run time polymorphism 