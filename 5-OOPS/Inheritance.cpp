#include <iostream>
using namespace std;
class Human  // parent class or super class
{
     private:
    int height;
public:
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    int setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human // child or sub class
{
public:
    string color;
    void sleep()
    {
        cout << "Male is Sleeping " << endl;
    }
    int getHeight(){
        return this->height;
    }
};

int main()
{
    Male m1;
    cout << m1.getHeight() << endl;

    /*

Male a1;
cout << a1.height << endl;
cout << a1.weight << endl;
cout << a1.age << endl;
cout << a1.color << endl;
a1.setWeight(34);
cout << a1.weight << endl;
a1.sleep();
return 0;
*/
}