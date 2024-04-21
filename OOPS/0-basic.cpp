#include <iostream>
#include <cstring>
// #include "Hero.cpp" 
using namespace std;

class Hero {
  private :  
 int health; 
public :
char *name;
 char level;

//  STATIC MEMBER DECLARATION 


 static int timetoCompleate;
 Hero(){
   cout << "Constructor Called" << endl;
   name = new char[100];
 }
 Hero(int health, char level) {
    cout << "Addres of this = " << this << endl;
      this -> health = health;
      this -> level = level;
 }
//  copy constructor called 

//  HERO(HERO & temp)
//     {
//        cout << "Copy Constructor Called" << endl; 
//        this ->age = temp.age;
//        this ->level = temp.level;

//     }

void print(){    
    cout << "[";
        cout << " Health =  " << this->health<< " ,";
        cout << "Level =  " << this->level << " ,";
        cout << "Name =  " << this->name << " ]";
        cout << endl;
        cout << endl;
   
    }
// copy contructor 

// deep copy nad shallow copy 

Hero(Hero& temp)
{
    char *ch = new char[strlen(temp.name) + 1];
    strcpy(ch, temp.name);
    this->name = ch;
    cout << "Is this called or Not" <<endl;
    this->health = temp.health;
    this->level = temp.level;
}






int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
    void setName(char name[]){
        strcpy(this->name, name);

    }
    
    ~Hero(){
        cout << "Destructor Called " <<endl;
    }
    static int random(){
       return timetoCompleate;
    }

};

// STATIC KEYWORD INITIALIZATION



// int Hero::timetoCompleate = 4; 

int main()
{
cout << Hero::random() <<endl;


//  STATIC KEYWORD 


    /*
 cout << Hero::timetoCompleate <<endl;

Hero a;

cout << a.timetoCompleate <<endl;


Hero b;
b.timetoCompleate = 10;
cout << a.timetoCompleate <<endl;
cout << b.timetoCompleate <<endl;





*/

/*

    // Destructor STATICALLY

  Hero a;
//   DESTRUCTOR CALLED DYANAMICALLY 
  Hero *b = new Hero;
  delete b;
 
*/


















    /*
    
    //   Shallow Copy constructor    
     Hero hero1;
     hero1.setHealth(12);
     hero1.setLevel('F');
     char name[7] = "Babbar";
     hero1.setName(name);
     hero1.print();


     Hero hero2(hero1);
     hero2.print(); 

     hero1.name[0] = 'G';
     hero1.print();
     hero2.print();

// copy assignement operator


     hero2 = hero1;
      hero1.print();
       hero2.print();




*/









    // Hero arhan(80, 'H');
    // arhan.print();
    // Hero adiba(arhan);
    // adiba.print();

    // adiba.health = arhan.health;
    // adiba.level = arhan.level;

    




























    /*
    // ststic constructor 
   cout << "Hi" << endl;
Hero arhan(70);
cout << "Address of arhan = " << &arhan <<endl;
cout << "Hello" << endl;

// dyanamic constructor 

 cout << "Hi 2" << endl;
Hero *adiba = new Hero;
cout << "Hello 2" << endl;
*/

/*
Hero arhan;
arhan.level = 'G';
arhan.setHealth(70);
cout << "Level of arhan = " << arhan.level << endl;
cout << "Health of arhan = " << arhan.getHealth() << endl;
 Hero *b = new Hero;
 b->level = 'K';
 b->setHealth(90);
 cout << "Level of arhan = " << (*b).level << endl;
cout << "Health of arhan = " << (*b).getHealth() << endl;


cout << "Size of arhan is = " <<sizeof(arhan) << endl;
cout << "Arhan health is = " << arhan.getHealth() << endl; 
arhan.setHealth(5);
 arhan.health = 50;  
 Umar.level = 'A'; 

cout << "Health is " << arhan.getHealth() << endl; 
 cout << "Level is " << arhan.level;  
 cout << sizeof(h1); 

*/


return 0;
}

//  shallow and deep copy constructor concept  



/*
#include <iostream>
#include<cstring>
using namespace std;
class HERO
{
public:
    int age;
    char level;
    char *name;
    HERO()
    {
        cout << "Default constructor called" <<endl;
        name = new char[100];
 
    }
  
 

    HERO(HERO & temp)
    {
       char *ch = new char[strlen(temp.name) + 1];
       strcpy(ch, temp.name);
       this->name = ch;
       cout << "Is this called or Not" <<endl;
       this ->age = temp.age;
       this ->level = temp.level;

    }
    void print()
    {  cout <<endl;
        cout << "[ "<< "Age of arhan : " << this->age <<", ";
        cout << "Level of arhan : " << this->level <<", ";
        cout << "Name of arhan : " << this->name <<" ]";
        cout <<endl <<endl;
    }
      void setName(char name[]){
        strcpy(this->name, name);

    }
};

int main()
{

   HERO arhan;
   arhan.age = 11;
   arhan.level = 'R';
   char name[7] = "Babbar";
   arhan.setName(name);
   arhan.print();
   HERO adiba(arhan);
   adiba.print();
   adiba.name[0] = 'G';
   adiba.print();
   arhan.print();


*/

// Copy assignement operator   




/*
#include <iostream>
#include<cstring>
using namespace std;
class HERO
{
public:
    int age;
    char level;
    char *name;
    HERO()
    {
        cout << "Default constructor called" <<endl;
        name = new char[100];
 
    }
  
    HERO(int age, char level)
    {
        cout << "Addres of this = " << this << endl;
        
        this ->age = age;
        this ->level = level;
        
    }

    HERO(HERO & temp)
    {
       char *ch = new char[strlen(temp.name) + 1];
       strcpy(ch, temp.name);
       this->name = ch;
       cout << "Is this called or Not" <<endl;
       this ->age = temp.age;
       this ->level = temp.level;

    }
    void print()
    {  cout <<endl;
        cout << "[ "<< "Age of arhan : " << this->age <<", ";
        cout << "Level of arhan : " << this->level <<", ";
        cout << "Name of arhan : " << this->name <<" ]";
        cout <<endl <<endl;
    }
      void setName(char name[]){
        strcpy(this->name, name);

    }
};

int main()
{
   HERO arhan(11, 'Y');
   HERO adiba(12, 'Z');
   arhan = adiba;
   arhan.print();
   
}
*/

// DESTRUCTOR CONCEPT STARTING FROM HERE 



/*
include <iostream>
#include<cstring>
using namespace std;
class HERO
{
public:
    int age;
    char level;
    char *name;
    HERO()
    {
        cout << "Default constructor called" <<endl;
        
 
    }
      ~HERO(){
        cout << "Destructor is Called " <<endl;

    }
};

int main()
{
    // Statically initilization of object 
    HERO arhan;


    // dyanamically  initialization of object 

    HERO* adiba = new HERO();

  
}
*/

// STATIC MEMBER AND FUNCTION 

/*
#include <iostream>
#include<cstring>
using namespace std;
class HERO
{
public:
    int age;
    char level;
    char *name;
    

    // Static member declaration 
    static int timeTocomplete; 


    // STATIC MEMBER FUNCTION DECLARATION 
    

    static int random()
    {
        // cout << this->age<< endl;  it is unavailable 
        return timeTocomplete;

    }
    


};


// STATIC KEYWORD INITIALIZATION 

// DATA TYPE CLASS Name Scope Resolution Operator (::) field Name = Value 

int HERO::timeTocomplete = 4; 

int main()
{ 
    // without creating a object 


    cout << HERO :: timeTocomplete <<endl;
    cout << HERO :: random() <<endl;


    
    // HERO arhan;
    // cout << arhan.timeTocomplete <<endl;
    // HERO adiba;
    // adiba.timeTocomplete = 9;
    // cout << adiba.timeTocomplete << endl;
    
    // cout << HERO :: timeTocomplete <<endl;
    
}
*/