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

// private member ko access karne ka tarika 
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
}