// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> v;

//     // CAPACITY OF VECTOR TELLS THAT HOW MANY ELEMENTS CAN BE STORE

//     cout << " The capacity of vector => " << v.capacity() << endl;
//     v.push_back(1);
//     cout << " The capacity of vector => " << v.capacity() << endl;
//     v.push_back(2);
//     cout << " The capacity of vector => " << v.capacity() << endl;
//     v.push_back(3);

//     // VECTOR DOUBLE ITSELF WHEN NEEDED (CREATE NEW DOUBLE SIZE VECTOR OLD IS DEAD) 

//     cout << " The capacity of vector => " << v.capacity() << endl;

//     // SIZE OF VECTOR TELLS THAT HOW MANY ELEMENTS ARE STORE 

//     cout << " The SIZE of vector => " << v.size() << endl;

//     // POP FUNCTION IN VECTOR 

//     v.pop_back();
//     cout << "after pop ";
    
//     for(int i:v)
//     {
//         cout<< i <<" ";
//     }
//     cout <<endl;
    
//     // FRONT AND BACK OPERATION IS PERFORMED 
     
//     cout <<"The 1st element is => " << v.front() <<endl;

//     cout <<"The last element is => " << v.back() <<endl;

//     // EASY TO ACCESS FROM LOOP 

//     for(int i:v)
//     {
//         cout << i << " " ;
//     }
//     cout << endl;


//     // ANOTHER WAY OF INITILIZING THE VECTOR 

//     vector<int> a(5,1);
//      for(int i:a)
//     {
//         cout <<  i << " " ;
//     }
//     cout << endl;

//     // COPYING ABOVE VECTOR IN NEW VARIABLE 

//     vector<int> last(a);
//     cout << " copying all vector " <<endl;
//     for(int i:last)
//     {
//         cout << i <<" ";
//     }
//     cout <<endl;



//     // CLEAR FUNCTION IN VECTOR 

//      v.clear();
//      cout << v.size();

     

// }
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    vector<int> v2 = {2,4,6,8};
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    // v.push_back(5);
    // v.insert(v.begin(), 4);
    // v.insert(v.begin(), 4, 12);
    // v.insert(v.begin() + 2, v2.begin(), v2.end());
    cout << "The cbegin is " <<  *(v.cbegin()) << endl;
    cout << "The end is " <<  *(v.end() -1) << endl;
    cout << "The cend is " <<  *(v.cend() - 1) << endl;
    cout << "The capcity is  " <<  v.capacity() << endl;
    cout << "The max size  " <<  v.max_size() << endl;
   for(auto it = v.begin(); it != v.end(); it++)
   {
    cout << *it << " ";
   }
}