// 3. Program to find the maximum among three numbers.
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << a << "isgreater" << endl;
        }
        else
        {
            cout << b << "isgreater" << endl;
        }
    }
    else
    {
        if (b > c)
        {
            cout << b << "isgreater" << endl;
        }

        else
        {
            cout << c << "isgreater" << endl;
        }
    }
    return 0;
}