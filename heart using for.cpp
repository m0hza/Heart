#include <iostream>
using namespace std;

int main()
{
    // The size of the heart
    int n = 10;

 
    for (int i = n/2; i <= n; i += 2)
    {
        for (int j = 1; j < n-i; j += 2)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << ".";
        }

        for (int j = 1; j <= n-i; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << ".";
        }

        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (i*2)-1; j++)
        {
            cout << ".";
        }

        cout << endl;
    }

    return 0;
}