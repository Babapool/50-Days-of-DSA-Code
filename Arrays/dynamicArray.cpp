#include <iostream>
using namespace std;

int main()
{
    int *array1;
    array1 = new int[5];

    for (int i = 0; i < 5; i++)
    {
        array1[i] = i + 1;
        cout << array1[i] << "->";
    }
    cout << endl;
    int *array2;
    array2 = new int[20];

    for (int i = 0; i < 5; i++)
    {
        array2[i] = array1[i];
    }

    for (int i = 5; i < 20; i++)
    {
        array2[i] = i + 1;
        cout << array2[i] << "->";
    }
    cout << endl;

    delete[] array1;
    array1 = array2;
    array2 = NULL;

    for (int i = 0; i < 20; i++)
    {
        cout << array1[i] << " -> ";
    }

    return 0;
}