#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    n = 4;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i * 2; j++)
        {
            cout << " ";
        }
        for (k = 0; k < n - i; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
