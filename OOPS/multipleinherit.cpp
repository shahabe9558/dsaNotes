#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    int weight;

public:
    void bark()
    {
        cout << "Barking " << endl;
    }
};
class Human
{
public:
    void speak()
    {
        cout << "speaking " << endl;
    }
};


// only using comma's operator 


class Hybrid : public Animal, public Human{

};
int main()
{
    Hybrid d1;
    d1.speak();
    d1.bark();
    cout << d1.age << endl;
}