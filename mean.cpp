#include <iostream>
using namespace std;

void mean(int values[], int size)
{
    int sum = 0;
    for (int elements = 0; elements < size; elements++)
    {
        sum += values[elements];
    }
    cout << sum / size << endl;
}

// int main()
// {
//     int values[] = {10, 20, 30, 40, 50};
//     int size = sizeof(values) / sizeof(values[0]);
//     mean(values, size);
//     return 0;
// }