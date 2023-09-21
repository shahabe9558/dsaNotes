#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    int weight;

public:
    void speak()
    {
        cout << "Speaking " << endl;
    }
};
class Cat : public Animal
{
public:
    void Meoow()
    {
        cout << "Cat is Speaking" << endl;
    }
};
class Rat : public Animal
{
public:
    void running()
    {
        cout << "Rat is Running" << endl;
    }
};
int main()
{
    Rat r1;

    Cat c1;
    r1.speak();
    c1.speak();
}