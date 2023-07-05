#include <iostream>
// Use getline from <string> header
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Enter a Title: ";
    cin >> name;        // cin can only take one word // For: Suren Ravi [Ravi cannot be considered]
    getline(cin, name); // Get params take cin and the input string // getline used to get continous words // For ex: Suren Ravi [Both words can be considered]
    cout << "The title is: " << name;
}