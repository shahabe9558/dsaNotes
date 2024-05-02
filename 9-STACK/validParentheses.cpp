#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool isValidParen(string s)
{
    stack<char> st;
    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];

        // if openning bracket stack me push kar denge 
        // if closing bracket to stackTop check aur pop 
        if(ch == '(' || ch == '{' || ch == '[')
        {
            st.push(ch);
        }
        // for closing bracket 
        else
        {
          if(!st.empty())
          {
            char top1 = st.top();

            if((ch == ')' && top1 == '(') ||
             (ch == '}' && top1 == '{') ||
             (ch == ']' && top1 == '['))
             {
                  st.pop();
             }
             else{
                return false;
             }
          }
          else{
            return false;
          }
        }

    }
    if(st.empty())
    return true;
    else
    return false;
}
int main()
{
    cout << "Enter the string " << endl;
    string s = "";
    cin >> s;
    bool sol = isValidParen(s);
    if(sol)
    {
        cout << "Parentheses is valid" << endl;
    }
    else{
        cout << "Not Valid" << endl;
    }
}
