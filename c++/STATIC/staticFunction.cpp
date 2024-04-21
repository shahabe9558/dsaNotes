// we can call class function without creating a object using class name
#include<iostream>
using namespace std;
class C1{
    static int resource;
    public:
    static int get_resource();
    void free_resource(){resource = 0;}
};
int C1::resource;
int C1::get_resource(){
    if(resource){
        return 0;
    }else{
        resource = 1;
        return 1;
    }
}
int main()
{
    C1 ob1, ob2;
    if(C1::get_resource()){
        cout << "ob has resource" << endl;
    }
    if(!C1::get_resource()){
        cout << "ob has denied" << endl;
    }
    ob1.free_resource();
    if(ob1.get_resource())
    {
        cout << "obs still are alive" << endl;
    }
}