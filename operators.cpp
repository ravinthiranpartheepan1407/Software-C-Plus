#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

// Arithmetic, Relational, Logical, Bitwise, Assignment, Misc

void operators(int valueA, int valueB, string arr)
{

    // Add
    int addResult = valueA + valueB;
    cout << "The addition is: " << addResult << endl;
    // mod
    int modResult = valueA % valueB;
    cout << "The Modulus is: " << modResult << endl;

    // Relational Ops
    if (valueA >= 20 && valueB <= 30)
    {
        cout << "Condition A Met" << endl;
    }
    else if (valueA >= 10 || valueB < 20)
    {
        cout << "Condition B Met" << endl;
    }
    else
    {
        cout << "No conditions met" << endl;
    }

    // Bitwise operators: AND, OR, XOR, Left Shift, and Right Shift
    int andResult = valueA & valueB;
    cout << "The and op result is: " << andResult << endl;
    int orResult = valueA | valueB;
    cout << "The or op result is: " << orResult << endl;
    int xorResult = valueA ^ valueB;
    cout << "The xor op result is: " << xorResult << endl;
    int leftShiftRes = valueA << valueB;
    cout << "The Left Shift Result op result is: " << leftShiftRes << endl;
    int rightShiftRes = valueA >> valueB;
    cout << "The Right Shift Result op result is: " << rightShiftRes << endl;

    // Misc operators: sizeOf, Ternary, Member access, arrow, cast, pointer (&), pointer(*),

    // Creted for storing the list of numbers in one dimensional vector
    vector<int> values;

    // Get the arr from getline cmd as string
    stringstream getArr(arr);

    // Created for typecasting
    int val;

    // Stream the str arr using right shift op to integer val to make all the values are casted to int type
    while (getArr >> val)
    {
        values.push_back(val);
    }
    // List of numbers will be stored in array here:
    int db_values[values.size()];
    // Assign the values stored in vector to arr db_val[]
    for (size_t elements = 0; elements < values.size(); elements++) // size_t use to defined the size of arr
    {
        db_values[elements] = values[elements];
    }
    // Print the values from db_values
    for (size_t elements = 0; elements < values.size(); elements++)
    {
        cout << db_values[elements] << endl;
    }
    cout << "The Pushed DB data: " << db_values << endl;
}

int main()
{
    int valueA, valueB;
    string arr;
    cout << "Get Value A: " << endl;
    cin >> valueA;
    cout << "Get Value B: " << endl;
    cin >> valueB;
    getline(cin, arr);
    // size = sizeof(arr) / sizeof(arr[0]);
    operators(valueA, valueB, arr);
    return 0;
}