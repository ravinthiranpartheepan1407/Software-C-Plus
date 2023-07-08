#include <iostream>
#include <string>
using namespace std;

// Element-wise ops

void matScalar(int rowSize, int columnSize, int scalar, int values)
{
    int matrix[rowSize][columnSize] = {{3, 3}, {4, 4}, {5, 5}, {6, 6}, {7, 7}}; // Replace values with arrValues
    for (int rowIndex = 0; rowIndex < rowSize; rowIndex++)
    {
        for (int columnIndex = 0; columnIndex < columnSize; columnIndex++)
        {
            cout << "Element-wise Mul ops for Matrix and Scalar is: " << endl;
            cout << "matrix[" << rowIndex << "][" << columnIndex << "]: ";
            cout << matrix[rowIndex][columnIndex] * scalar << endl;
        }
    }
}

int main()
{
    int rowSize, columnSize, scalar, values;
    cout << "Enter Matrix Values: " << endl;
    cin >> values;
    cout << "Enter Row Dimension = ";
    cin >> rowSize;
    cout << "Enter Column Dimension = ";
    cin >> columnSize;
    cout << "Enter Scalar Value = ";
    cin >> scalar;
    matScalar(rowSize, columnSize, scalar, values);
}