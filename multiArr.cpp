#include <iostream>
using namespace std;

void multiArr(int arrX, int arrY)
{
    int dimensions[arrX][arrY] = {{3, 3}, {4, 4}, {5, 5}, {6, 6}, {7, 7}};
    for (int index = 0; index < arrX; index++)
    {
        for (int index2 = 0; index2 < arrY; index2++)
        {
            cout << "Dimensions[" << index << "][" << index2 << "]: ";
            cout << dimensions[index][index2] << endl;
        }
    }
}

int main()
{
    int arrX, arrY;
    cout << "Enter Row dimesion size: " << endl;
    cin >> arrX;
    cout << "Enter Column dimension size: " << endl;
    cin >> arrY;
    multiArr(arrX, arrY);
}