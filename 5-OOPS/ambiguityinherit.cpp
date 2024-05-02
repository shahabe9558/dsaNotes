#include <iostream>
using namespace std;
class A
{
public:
    void speak()
    {
        cout << "Speaking ambiguity of A class " << endl;
    }
    
     void speak(char f)
    {
        cout << "Speaking ambiguity of g class " << endl;
    }
};
class B
{
public:
    void speak(char b)
    {
        cout << "Speaking ambiguity of B class " << endl;
    }
};
class C
{
public:
    void speak()
    {
        cout << "Speaking ambiguity of C class " << endl;
    }
};
class D : public A, public B, public C
{
};
int main()
{

 A obj;
 char h = 'j';
 obj.speak(h);


//   D n1;
 
//  n1.speak(); 
//   n1.A :: speak();   
//   n1.B :: speak();  
//   n1.C :: speak();  
return 0;
} 