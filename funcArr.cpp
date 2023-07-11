#include <iostream>
using namespace std;

void funcArr(int arr[], int size)
{
    int sum = 0;
    for (int element = 0; element < size; element++)
    {
        sum += arr[element];
    }
    cout << "The Sum of Array of numbers is: " << sum << endl;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    funcArr(arr, size);
}