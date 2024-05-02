  // Encapsulation -> 
  // wrapping up data members and function

  #include<iostream>
  using namespace std;
  class STUDENT {
    private:
    // data members or property/state
    
    string name;
    int age;
    int height;
    public :

    // members function or methods/behaviour
    int getAge(){
        return this-> age;
    } 
  };

 
  int main()
  {
    STUDENT first;
    cout << "Everything is Okkk" <<endl;
    cout << first.getAge();
    return 0;

  }
  // unit testing 
  // Code reusebility
  // we can  make class read only also 
  // Encapsulation means data/information hiding / data hiding (Security increases) 
  // fully encapsulated means all data members and functions are private 
