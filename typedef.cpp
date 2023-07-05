// Int, char, double, float, wide_char, bool
#include <iostream>
using namespace std;
int main()
{
    typedef int num;
    typedef char string;
    typedef bool check;
    typedef double fraction;

    enum Color // Values are mutab;e
    {
        red,   // Default value 0
        green, // 1....
        blue = 5
    };
    num data[] = {10, 20, 30, 40};
    fraction dataFract[] = {21.7, 14.0, 7, 3};
    Color selectedColor = blue;
    cout << data[1] << endl;
    cout << dataFract[1] << endl;
    cout << selectedColor << endl;
}