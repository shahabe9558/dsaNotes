#include <iostream>
using namespace std;
void update(int **p)
{
    //p = p+1; // no change 

    //  *p = *p+1; // Change the value in main function

       **p = **p+1; // Change the value in main function

}
int main()
{
    int a = 8;
    int *p = &a;
    int ** p2 = &p;
    cout << "Before" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << p2 << endl;

    update(p2);

    cout << "After" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << p2 << endl;  
}