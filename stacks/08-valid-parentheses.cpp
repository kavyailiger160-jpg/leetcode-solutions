#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            st.push(c);
        }
        else
        {
            if (st.empty())
                return false;

            char top = st.top();
            st.pop();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
            {
                return false;
            }
        }
    }

    return st.empty();
}

int main()
{
    string s1 = "()[]{}";

    cout << "Test Case 1: " << s1 << endl;
    cout << "Result: " << (isValid(s1) ? "true" : "false") << endl;

    string s2 = "(]";

    cout << "\nTest Case 2: " << s2 << endl;
    cout << "Result: " << (isValid(s2) ? "true" : "false") << endl;

    return 0;
}