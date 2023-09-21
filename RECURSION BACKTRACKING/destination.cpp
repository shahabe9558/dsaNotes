// practice reach home question
#include<iostream>

using namespace std;

void reachHome(int src, int des)
{
    // base case
    cout << "source is = " << src <<" destination is = " << des<<endl;
  
    if(src == des)
    {
        cout << "Reached Home" << endl;
        return ;
    }
    src++;
    reachHome(src, des);
}
int main()
{
    int src = 1;
    int des = 4;
    reachHome(src, des);

}


















// #include <iostream>
// using namespace std;
// void reachHome(int src, int des)
// {
//     cout <<"Source = " << src <<" Destination = " << des <<endl;
//     if(src == des)
//     {
//         cout << "Reached Home";
//         return ;
//     }
//     src++;
//     reachHome(src, des);
// }

// int main()
// {
// int des = 3;
// int src = 1;
// reachHome(src, des);

// }