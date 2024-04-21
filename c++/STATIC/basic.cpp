#include<iostream>
using namespace std;
// class is a logical structure but not any physical things 
// static member is declared only once for all objects 

class Shared{
    static int a;
    int b;
    public :
    void set(int i, int j){
        a = i;
        b = j;  
    };
    void show();
};
int Shared::a;
void Shared::show(){
    cout << "This is static a = " << a << endl;
    cout << "This is non-static b = " << b << endl;
}
int main()
{
    Shared x, y;  
    x.set(1,1);
    x.show();
    y.set(2,2);
    y.show();
    // x.show();
    y.set(3,3);
    x.show();
    y.show();

}