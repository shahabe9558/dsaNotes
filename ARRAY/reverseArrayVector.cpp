#include<iostream>
#include<vector>
using namespace std;
void revrse(vector<int> &v, int s)
{
  //  int s = 0;
   int e = v.size()-1;
   while(s <= e)
   {
    swap(v[s++], v[e--]);
   }
}
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  
  cout << "Reverse of array is ";
  revrse(v, 3);
  for(int i:v)
  {
    cout << i << " "; 
  }

}