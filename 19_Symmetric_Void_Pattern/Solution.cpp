#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // First half :
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 0; j < (n - i); j++)
        {
            cout << "* ";
        }

        // Spaces
        for (int j = 0; j < 2 * i; j++)
        {
            cout << "  ";
        }

        // Stars
        for (int j = 0; j < (n - i); j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // Second half :
    int spaces = (2 * n) - 2;
    for (int i = 0; i < n; i++)
    {
        // Stars
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }

        // Spaces

        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }

        // Stars
        for (int j = 0; j < (i + 1); j++)
        {
            cout << "* ";
        }
        cout << endl;
        spaces -= 2;
    }

    return 0;
}