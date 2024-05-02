#include<iostream>
using namespace std;
class Human{
    public:
    void speak()
    {
        cout <<"Man is speaking" <<endl;
    }
};
class Dog: public Human{
    public:
    // if this fun is not avail then it will call from Human class

    // void speak()
    // {
    //     cout <<"Dog is barking" << endl;
    // }
};
int main()
{
    Dog obj;
    obj.speak();

}