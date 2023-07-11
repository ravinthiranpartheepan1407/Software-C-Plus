#include <iostream>
using namespace std;

int *funcArr(int arr[], int size)
{
    int sum = 0;
    for (int values = 0; values < size; values++)
    {
        sum += arr[values];
    }
    return arr;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int *getFunc = funcArr(arr, size);
    for (int index = 0; index < size; index++)
    {
        cout << *(getFunc + index) << endl;
    }
}