#include<iostream>
#include<vector>
using namespace std;
void reverse(vector<int> &v)
{
  int s = 0;
  int e = v.size()-1;
  while(s <= e)
  {
    swap(v[s], v[e]);
    s++;
    e--;
  }
}
int main(){
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  reverse(v);
  for(auto i : v)
  {
    cout << i << " ";
  }
}