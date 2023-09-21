#include<iostream>
#include<cstring>
// #include "hero.cpp"
using namespace std;
class Hero{
    int health;
    char level;

    public:
    char *name;
    static int timeToComplete; 

 int getHealth()
 {
    return health;
 }
 // Constructor
  Hero()  
  {
    cout << "Simple constructor is called" << endl;
    name = new char[100];
  }
  // Destructor

  ~ Hero()
  {
     cout << "Destructor is called" << endl;
  }

 void setHealth(int h)
{
    health = h;
}
void setLevel(char L)
{
  level = L;
}
void seName(char name[])
{
    strcpy(this->name, name);
}

Hero(Hero& temp)
{
  char *ch = new char[strlen(temp.name) + 1];
  strcpy(ch, temp.name);
  this->name = ch;
  // cout << "Copy Constructor is called" << endl;
  // cout << temp.health <<endl;
  // cout << temp.level <<endl;
  this->health = temp.health;
  this->level = temp.level;
}

void print()
{
  cout <<"[ Name: " << this->name <<", ";
  cout <<"Health: " << this->health <<", ";
  cout <<"Level: " << this->level << " ]" <<endl;

}
static int random()
{
  return timeToComplete;
//  return this->health <<end; unavialble for static member
}

};
// static data members ko class ke bahr declare karte hai
//it belongs to class not object
 int Hero::timeToComplete = 5;

int main()
{
  Hero a;
  cout << Hero::random() <<endl;
  // Hero a;
  // cout << Hero::timeToComplete << endl;  // aise hi recoomendde hai by Baabar

  // cout << a.timeToComplete << endl;


  // Hero a;

  // Hero* b = new Hero;
  // delete b; // for dyanamicaally destructor is called manually


  //  Hero hero1;
  //  hero1.setHealth(12);
  //  hero1.setLevel('K');
  //  char name[7] = "Babbar";
  //  hero1.seName(name);
  //  hero1.print();

  //  Hero hero2(hero1);

  //  hero2.print();

  //  // default copy constructor uses shallow copy constructor

  //  hero1.name[0] = 'G';
  //  hero1.print();
  //  hero2.print();

  //  // copt assignement operator
  //  hero1 = hero2;
  //  hero1.print();




}

  // Hero arhan(50, 'A');
  // Hero ali(arhan);
  // arhan.print();
  // ali.print();



   



  // Hero arhan(32);
  // cout << "address of arhan = " << &arhan<< endl;
  // cout << arhan.getHealth() <<endl;

//  Hero arhan;.
//  Hero *abdul = new Hero;
// //   statically allocation
//   Hero ramesh;
//   cout << "Size of ramesh is = " << sizeof(Hero) << endl;
//   ramesh.setHealth(10);
//   cout << ramesh.getHealth() << endl;


// copy constructor 
// Hero(Hero& temp)
// {
//   // cout << "Copy Constructor is called" << endl;
//   // cout << temp.health <<endl;
//   // cout << temp.level <<endl;
//   this->health = temp.health;
//   this->level = temp.level;
// }




// //   dyanamic allocation
//   Hero *b = new Hero;
//   cout << "Size of ramesh is = " << sizeof(Hero) << endl;
//   (*b).setHealth(12); // b will  print the address only
//   cout << (*b).getHealth() << endl; // or

//   b->setHealth(13); 
//   cout << b->getHealth() << endl;


  // Hero()  
  // {
  //   cout << "Simple constructor is called" << endl;
  //   name = new char[100];
  // }
  // Parameterized Constructor 
  // Hero(int health)
  // {
  //   cout <<"This addres is = " << this <<endl;

  //   // this me arhan(object) ka address hota hai

  //   this->health = health;
  //   // cout << "Parameterized constructor is called" << endl;
  // }
  // Hero(int health, char level)
  // {
  //   this->health = health;
  //   this->level = level;

  // }

 

// {

// Hero obj1;
// obj1.health = 23;
// cout << obj1.heroAction() << endl;

// cout << obj1.health << endl;
// cout << sizeof(Hero);
// // cout << Hero.heroAction();

// }


// class Hero
// {
//     // if no element in class then size of object will be 1
// //    int health;
// };
// int main()
// {
    
//     Hero obj1;
//     cout << sizeof(obj1) << endl;

// }