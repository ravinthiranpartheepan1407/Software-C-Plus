#include <iostream>
using namespace std;

int triangle(int base, int height)
{
    // Formula: 1/2 * (b * h)
    int result = 0.5 * base * height;
    return result;
}

// int main()
// {
//     int base, height;
//     cin >> base;
//     cin >> height;
//     cout << triangle(base, height) << endl;
//     return 0;
// }