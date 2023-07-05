// Auto, Register, Extern, Static: Persist the data, and Mutable

#include <iostream>
using namespace std;
extern triangle(int base, int height);

int main()
{
    auto values = 10.45; // AUtomatically infer the type of the var
    cout << typeid(values).name() << endl;
    register int valueA = 10; // Store var's value in CPU register for faster access.
    cout << valueA << endl;
    cout << triangle(10, 20); // Extern
}