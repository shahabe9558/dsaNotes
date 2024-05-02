#include <iostream> 
using namespace std;
int numStairs(int n)
{
    // 0 se niche ke liye 
    if(n < 0)
    {
        return 0;
    }
    // agar 0 par hai to ek tarika pahuchne ka  
    if(n == 0){
        return 1;
    }
    return numStairs(n - 1) + numStairs(n - 2); 
}
int main()
{
    int n;
    cout << "Enter the numbear of stairs" << endl;
    cin >> n;
    cout << "Total num of ways to climb is " << numStairs(n);
}