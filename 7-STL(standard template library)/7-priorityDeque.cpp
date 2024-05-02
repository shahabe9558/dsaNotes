#include <iostream>
#include <queue>
// #include <vector> 
using namespace std;

int main()
{
    // IT GIVES THE MAX HEAP

    priority_queue<int> maxi1;

    // IT GIVES THE MIN HEAP

    priority_queue<int, vector<int>, greater<int>> mini1;

    maxi1.push(5);
    maxi1.push(4);
    maxi1.push(3);
    maxi1.push(9);
    int size = maxi1.size();

    for(int i =0; i<size; i++)
    {
        cout << maxi1.top() << " ";
        maxi1.pop();
    }
    cout <<endl << "The size is = "<< maxi1.size() << endl;
  
    mini1.push(5);
    mini1.push(4);
    mini1.push(3);
    mini1.push(9);
    int size2 = mini1.size();

    for(int i =0; i<size2; i++)
    {
        cout << mini1.top() << " ";
        mini1.pop();
    }

    // PRACTICE KAR RAHE HAI 

}