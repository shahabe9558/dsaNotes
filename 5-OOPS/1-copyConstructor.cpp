// two ways of copy constuctor hota hai 
// 1-Shallow copy construtor (by default yahi hota hai)
// 2-Deep copy constructor

// deep copy example  
#include <iostream> 
using namespace std;
class DeepCopy{
    public :
    int *data;
    DeepCopy(int val){
        data = new int;
        *data = val;
    }
    void print(){
        cout << "The data is " << *data << endl;
    }
    void setData(int val)
    {
        *data = val;
    }
    DeepCopy(DeepCopy & source)
    {
        data = new int;
        data = source.data;
    }
    ~DeepCopy(){
        delete data;
    }
};
int main()
{
    DeepCopy obj(10);
    DeepCopy obj2(obj);
    obj2.setData(12);
    obj.print();
    obj2.print();
}


// Shallow copy example 
// #include <iostream>
// using namespace std;
// class ShallowCopy{
//     public :
//     int *data;
//     // constructor create karo  
//     ShallowCopy(int value){
//        data = new int; //allocating memory to data 
//        *data = value;
//     }
//     ShallowCopy(ShallowCopy & source)
//     {
//         cout << "Shallow is called" << endl;
//         data = source.data;
//     }
//     void print(){
//         cout << "The value of data is " << *data << endl;
//         cout << "The address of data is " << data << endl;
//     }
//     void setData(int value)
//     {
//         *data = value;
//     }
//     ~ShallowCopy()
//     {
//         delete data; // free dyanamic memeory 
//     }
// };
// int main()
// {
//     ShallowCopy obj(10);
//     ShallowCopy obj2(obj);
//     obj2.setData(23);
//     obj.print();   
//     obj2.print();
// }

