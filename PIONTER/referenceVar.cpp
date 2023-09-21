#include <iostream>
using namespace std;
void update(int & b)
{
    b++;
    cout << b <<endl;
}

// NOT POSSIBLE BCZ MEMORY ACCES NHI KAR SKTE

int & update2(int a)
{
    int num = a;
    int &ans = num;
    return ans;
}
int * update3(int a)
{
    int* num = &a;
    return num;
}

// Reference variable -> same name of exiting var, not allocating new spaces

int main()
{
    /*
    cout << endl;
    int a = 5;
    int &b = a;
    cout << b << endl;
    b++;
    cout << b << endl <<endl;
    */
   /*
   int a = 10;
   cout << "Before = " << a <<endl;
   update(a);
   cout <<"After" << a <<endl;
   */
  int a = 8;

  cout << update2(a);
  cout << update3(a);

}