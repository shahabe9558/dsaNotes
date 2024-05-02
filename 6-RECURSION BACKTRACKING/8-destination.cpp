#include <iostream> 
using namespace std;
void reachHome(int src, int des)
{
    // base case 
    cout << "Src is " << src << " Des is " << des << endl;
    if(src == des)
    {
        cout << "Finally i reached home" << endl;
        return ;
    }
    src++;
    reachHome(src, des);
}
int main()
{
    int des = 10;    
    int src = 0;
    reachHome(src, des);
}