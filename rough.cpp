#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(424);
   v.push_back(3);
   v.push_back(44);
   std :: cout << sort(v.begin(), v.end());
}