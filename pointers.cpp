#include <iostream>
using namespace std;

void pointers(int valueA, int valueB, string title)
{
    // Pointers (& - used for accessing the memory address of the variable and * - used for accessing the values from the var's memory address)
    int *addrValA = &valueA; // If the instantiated var has some dtype then set a pointer * to instantiated var for accessing the address (&) of assigment variable.
    // dtype should be same for both instantiated var and assignment var
    cout << "The memory address of ValueA is:" << addrValA << endl;
    int getValFrmAddr = *addrValA;
    cout << "The value got from address of valueA is: " << getValFrmAddr << endl;
    string *strAddress = &title;
    cout << "The string address is: " << strAddress << endl;
}

int main()
{
    int valueA, valueB;
    string title;
    cout << "Get Value A: " << endl;
    cin >> valueA;
    cout << "Get Value B: " << endl;
    cin >> valueB;
    cout << "Get String: " << endl;
    cin >> title;
    pointers(valueA, valueB, title);
}