// Loops: Decision Making, While, For, Do While, Nested Loop
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Global Declaration of Customer and Customer Details
struct Customer
{
    string userName;
    string secret;
};

enum CustomerDetails
{
    accountType,
    accountNumber
};

// Account Login Structure
struct Login
{
    string custID;
    string password;
};

void requestAccountID(string userName, string secret, int accountIndex)
{
    string accountTypes[] = {"Savings", "Current"};
    Customer customer;
    customer.userName = "Ravi";
    customer.secret = "Rooney";
    // Assigment of enum
    CustomerDetails custID = accountNumber;
    CustomerDetails custAccType = accountType;

    // Struct assigment
    if (userName == customer.userName && secret == customer.secret)
    {
        int custID = rand();
        string custAccType = accountTypes[accountIndex];
        cout << "Your customer ID is: " << custID << endl;
        cout << "Your account type is: " << custAccType << endl;
    }
    else
    {
        cout << "No account associated with this username" << endl;
    }
}

bool login(int custID, string password)
{
    // CustomerDetails customerID = accountNumber;
    int customerID = rand();

    Customer customer;
    customer.userName = "Ravi";

    Login loginData;
    loginData.password = "Suren";

    if (custID == customerID && password == loginData.password)
    {
        cout << "Successfully Signed in: " << custID << endl;
        cout << "Customer Name: " << customer.userName << endl;
    }
    else
    {
        cout << "Login Failed" << endl;
    }
    return true;
}

void transfer(int userAcc, int beneficiaryAcc, int amount, string secret)
{
    // Account Number
    // CustomerDetails customerID = accountNumber;
    int customerID = rand();
    // Secret Code
    Customer customer;
    customer.secret = "Rooney";

    int beneficiaryDB[] = {254789, 75647};
    if (userAcc == customerID)
    {
        for (int accounts = 0; accounts < sizeof(beneficiaryDB) / sizeof(beneficiaryDB[0]); accounts++)
        {
            if (beneficiaryAcc == beneficiaryDB[accounts])
            {
                cout << "Beneficiary Found in your account" << endl;
                cout << "Enter Amount to Transfer: " << endl;
                cin >> amount;
                if (amount > 10000)
                {
                    cout << "Please enter amount according to the daily limit: 1000 INR" << endl;
                }
                else
                {
                    cout << "Limit conditions met" << endl;
                    cout << "Enter secret code to confirm this transfer: " << endl;
                    if (secret == customer.secret)
                    {
                        cout << "Trasfer Completed" << endl;
                    }
                    else
                    {
                        cout << "Trasnfer Failed" << endl;
                    }
                }
            }
            else
            {
                cout << "Beneficiary Not Found! Please add this beneficiary in your account" << endl;
            }
        }
    }
    else
    {
        cout << "Not authorized" << endl;
    }
}

int main()
{
    // Request Customer ID Var
    string userName;
    string secret;
    int accountIndex;

    // Account Login Var
    int custID;
    string password;

    // Money Transfer
    int userAcc;
    int beneficiaryAcc;
    int amount;

    // Request Customer ID
    cout << "Enter your username: " << endl;
    cin >> userName;
    cout << "Enter secret: What is your dog name?" << endl;
    cin >> secret;
    cout << "Select Account Type: Enter 0: Savings and Enter 1: Current" << endl;
    cin >> accountIndex;
    cout << "Enter Password: " << endl;
    requestAccountID(userName, secret, accountIndex);

    // Account Login and Money Transfer
    cout << "Enter your Customer ID: " << endl;
    cin >> custID;
    cout << "Enter your Password: " << endl;
    cin >> password;
    if (login(custID, password))
    {
        login(custID, password);
        cout << "Login Successful" << endl;
        cout << "You can make the money transfer now" << endl;
        // Transfer
        cout << "Enter Beneficiary account number: " << endl;
        cin >> beneficiaryAcc;
        cout << "Enter Amount to Transfer: " << endl;
        cin >> amount;
        transfer(custID, beneficiaryAcc, amount, secret);
    }
    else
    {
        cout << "Login Failed" << endl;
    }

    return 0;
}