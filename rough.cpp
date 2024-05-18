#include<iostream>
#include<queue>
#include <stack>
#include <map>
#include <algorithm>
using namespace std;
int main() {
   vector<int> arr = {1,2,3, 0, 0, 0};
   vector<int> arr2 = {2, 5, 6};
  
   // arr.push_back(arr2[0]);
   int index = arr2.size();
   for(int i = 0; i<arr2.size(); i++)
   {
      arr[index] = arr2[i];
      index++;
   }
   sort(arr.begin(), arr.end());
   for(auto i : arr)
   {
      cout << i << " ";
   }
}