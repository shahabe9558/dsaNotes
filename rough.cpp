#include <iostream>
using namespace std;
void update(string s)
{
   for(int i = 0; i<s.length(); i++)    
   {
      s[i] = s[i] + 1;
      cout << s[i];
   }
}
int main()
{
   string str = "Shahabe";
   update(str);
   cout << endl;
   cout << str;
}