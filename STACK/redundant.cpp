// ((a + b)) redundant hai 
// (a + b) not redundant
#include<iostream>
#include<stack>
using namespace std;
bool isRedundant(string s)
{
    stack<char> st;
    for(int i = 0; i<s.length(); i++)
    {
        char ch = s[i];

        // ch = '(' or operator tab     
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        // ch = ')' or lower case leter 

        else{

            if(ch == ')')
            {
                bool redundant = true;
                while(st.top() != '(')
                {
                   char top = st.top();
                   if(top == '+' || top == '-' || top == '*' || top == '/')
                   {
                    redundant = false;
                   }
                  st.pop();
                }
                if(redundant == true)
                return true;
                st.pop();
            }

        }
    }
    return false;
}
int main()
{
    string str = "((a + b))";
    bool sol = isRedundant(str);
    if(sol)
    {
        cout << "Redundant bracket is present" << endl;
    }
    else{
        cout << "Not Present" << endl;
    }
}
