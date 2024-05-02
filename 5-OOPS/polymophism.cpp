#include <iostream>
using namespace std;

// There are two types of polymorphism 1- compile time , 2- run time polymorphism
class Temp
{
public:
    void speak(int h)
    {
        cout << "1st speak function is called" << endl;
    }
    void speak()
    {
        cout << "2nd speak function is called" << endl;
    }
    void speak(char a)
    {
        cout << "3rd speak function is called" << endl;
    }
     void speak(char a, int l)
    {
        cout << "4th speak function is called" << endl;
    }
};
int main()
{
    // function overloaded concept based 

    Temp t1;
    t1.speak('8');
    t1.speak(76);
    t1.speak(76,67);
}