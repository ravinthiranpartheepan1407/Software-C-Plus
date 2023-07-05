// Extern: can find the declarations of vars or funcs declared somewhere (Like in another file of your program directory)

#include <iostream>
using namespace std;

extern void mean(int values[], int size);

int main()
{
    int values[] = {10, 20, 30, 40, 50};
    int size = sizeof(values) / sizeof(values[0]);
    mean(values, size);
    return 0;
}