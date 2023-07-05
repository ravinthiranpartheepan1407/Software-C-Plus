#include <iostream>
#include <string>
using namespace std;

void library(string title, string series, float price)
{
    struct LibraryDB
    {
        string title;
        string series;
        float price;
    } search;

    if (search.title == "First Phone Accident" && search.series == "1.0")
    {
        cout << "Book Available" << endl;
        cout << "Please pay the asking price to your Book purchase" << endl;
        if (search.price == 10.0)
        {
            cout << "Purchase Successful" << endl;
        }
        else
        {
            cout << "Purchase Failed" << endl;
        }
    }
    else
    {
        cout << "Book Not Found" << endl;
    }
}

int main()
{
    string title;
    string series;
    float price;
    cout << "Get Book Title: " << endl;
    getline(cin, title);
    cout << "Get Book Series: " << endl;
    getline(cin, series);
    cout << "Pay the price for the Book: " << endl;
    cin >> price;
    library(title, series, price);
}