#include <iostream>
using namespace std;
main()
{
    int array[] = {2, 3, 1, 3, 2, 4, 1};
    int size = 7;
    for (int i = 0; i < size; i++)
    {
        for (int j; j = i + 1; j++)
        {
            if (array[i] == array[j])
            {
                array[i] = array[j] = -1;
            }
        }
    }
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] > 0)
        {
            unique = array[i];
        }
    }
    return 0;
}