#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (char ch = 'A'; ch < 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    return 0;
}

// Another way :

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (char ch = 'A'; ch < 'A' + n - i; ch++)
//         {
//             cout << ch << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }