#include<iostream>
#include<stack>
#include<string>
bool findRedundantBrackets(string &str)
{
    stack<char> st;

    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];

        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
        //   ya to ) bracket ya char 
          if(ch == ')')
          {
            bool isRedundant = true;
            while(st.top() != '(')
            {
                char top = st.top();
                if(top == '+' || top == '-' || top == '*' || top == '/')
                {
                    isRedundant = false;
                }
                st.pop();
            }
          }
          if(isRedundan == true)
          {
            return true;
            st.pop();
          }
        }
        

    }
    return false;
}
using namespace std;
int main()
{
    cout << "Enter the input" << endl;
    string s;
    cin >> s;
    if(findRedundantBrackets(s))
    {
        cout << "Bracket is redundant or uselless" << endl;
    }
    else{
        cout <<"Valid Bracket" << endl;
    }
}