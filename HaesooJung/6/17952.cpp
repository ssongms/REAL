#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n, result = 0;
    stack<pair<int, int>> s;
    cin >> n;
    while (n)
    {
        bool num;
        cin >> num;
        if (num)
        {
            int a, b;
            cin >> a >> b; 
            s.push(make_pair(a, b));
        }
        if (!s.empty())
        {
            s.top().second--;
            if (s.top().second == 0)
            {
                result += s.top().first;
                s.pop();
            }
        }
        n--;
    }
    cout << result;
}