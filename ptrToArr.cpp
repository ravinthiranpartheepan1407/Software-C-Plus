#include <iostream>
using namespace std;

void pointerArr()
{
    float data[] = {10, 20, 30, 40, 50};
    float *dataPtr = data;
    float result = 0;
    for (int element = 0; element < sizeof(data) / sizeof(data[0]); element++)
    {
        result += data[element];
        cout << "Data Pointer Index: "
             << element << " "
             << "Address: "
             << &data[element] << " "
             << "with values: ";
        cout << *(dataPtr + element) << endl;
    }
    cout << "Overall Result: " << result << endl;
}

int main()
{
    pointerArr();
}