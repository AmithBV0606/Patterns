#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int space = 2 * (n - 1);

    for (int i = 1; i <= n; i++)
    {
        // Numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        // Spaces
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // Numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }
}