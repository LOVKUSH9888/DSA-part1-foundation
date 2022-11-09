#include <iostream>
using namespace std;
main()
{
    int array2[2][2];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> array2[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout >> array2[i][j] << "  ";
        }
        cout << endl;
    }
    return 0;
}