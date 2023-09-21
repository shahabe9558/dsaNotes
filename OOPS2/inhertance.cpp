#include<iostream>
using namespace std;
class Human{
   protected: // child class access kr skta hai but not object
   
   int age = 24;
   int weight;
   int height;

   void sleeping()
   {
    cout << "Male is sleeping" << endl;
   }
};
class Male : public Human{
    public:
    char color;
    char prop;
  int getAge()
  {
     return this->age;
  }

};
int main()
{
    Male object;
    cout << object.getAge()<<endl;
    // object.sleeping();

}