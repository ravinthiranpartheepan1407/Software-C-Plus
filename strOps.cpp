// strcpy, strcat, strlen, strcmp, strchr, strstr

#include <iostream>
using namespace std;

string operations()
{
    string data[] = {"Ravi", "Suren", "Vertez"};
    string strCopy = "";
    string strCat = "";
    string strLen = "";
    string strCmp = "";
    for (int elements = 0; elements < sizeof(data) / sizeof(data[0]); elements++)
    {
        strCat += data[elements];
    }
    return strCat;
}

int main()
{
    cout << "The copied string: " << operations << endl;
}