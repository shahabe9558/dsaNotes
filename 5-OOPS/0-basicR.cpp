#include <iostream> 
#include <string>
using namespace std;
class Animal{
    // define constructor in public mode
    private:
    string found = "Cat family found in jungle";
    public:
    string temp;
    string name;
    string category;
    int *num;

    // ambigious constructor 
    Animal(string name, string category)
    {
        this->name = name;
        this->category = category;
    }
    void animalDet(){
        cout << "The name of animal is = " << name << endl;
        cout << "The category of animal is = " << category << endl;
    }
    // default constructor 
    Animal(){
    cout << "It is default constructor is called " << endl;
    }

    string getFound(){
        return found;
    }
    void setTemp(string t)
    {
        temp = t;
    }
    void isSpeak()
    {
        cout << "Animal do not speak" << endl;
    }

    // default destructor 
    ~Animal(){
        cout << "destructor is not called automatically you will have to do memory free " << endl;
        delete num;
        cout << "Num has been deleted" << endl;
        // static memory need not to be deallocate bcz it is managed by operating system iteself 
        // it allocate when programm starts 
        // and dealllocate when program finished 
        // delete name;
    }
    // copy constructor  
    Animal(Animal & temp)
    {
        cout << "Copy constructor is called " << endl;
        this->name = temp.name;
        this->category = temp.category;
    }
};
int main()
{
    // Animal a1;
    Animal a2("Tiger", "Cat family");
    Animal a3(a2);
    a3.animalDet();
    Animal a4("German Shephord", "Dog Family");
    Animal a5(a4);
    a5.animalDet();
    // cout << "the found is = " << a2.getFound()<< endl;
    // a2.setTemp("Sunny");
    // cout << "The temp is = " << a2.temp <<endl;
    // a2.animalDet();
    // a3.animalDet();
}