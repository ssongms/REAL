#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int m;
    string s = "";
    stack<char> left;
    stack<char> right;

    cin >> s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        left.push(s[i]);
    }

    cin >> m;

    for (int i = 0; i < m; i++)
    {
        char command, c;
        cin >> command;

        if (command == 'L')
        {
            if (!left.empty())
            {
                right.push(left.top());
                left.pop();
            }
        }
        else if (command == 'D')
        {
            if (!right.empty())
            {
                left.push(right.top());
                right.pop();
            }
        }
        else if (command == 'B')
        {
            if (!left.empty())
            {
                left.pop();
            }
        }
        else if (command == 'P')
        {
            cin >> c;
            left.push(c);
        }
    }

    while (!left.empty())
    {
        right.push(left.top());
        left.pop();
    }

    while (!right.empty())
    {
        cout << right.top();
        right.pop();
    }
}