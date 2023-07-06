#include <iostream>
using namespace std;

struct customerBalance
{
    int holderA;
    int holderB;
};

// Pass by value
double getEqShare(int holderAAddr, int holderBAddr)
{
    double shared;
    double pool;
    pool = holderAAddr;
    holderAAddr = holderBAddr;
    holderBAddr = pool;
    // Shared Pool
    shared = (holderAAddr + holderBAddr) / 2;
    cout << "Joint account access: "
         << "Holder A can access: " << holderAAddr << " "
         << "(B's Account)"
         << ";"
         << " "
         << "Holder B can access: " << holderBAddr << " "
         << "(A's Account)" << endl;
    cout << "The share is: " << shared << endl;

    return shared;
}

// Pass by reference
void getCustID(int &holderAAddr, int &holderBAddr)
{
    int *custIDHolderA = &holderAAddr;
    cout << "Customer ID of Holder A: " << custIDHolderA << endl;
    int *custIDHolderB = &holderBAddr;
    cout << "Customer ID of Holder B: " << custIDHolderB << endl;
}

// Using pointers
void getCustBalance(int *holderABalance, int *holderBBalance)
{
    cout << "Balance in Holder A's Account: " << holderABalance << endl;
    cout << "Balance in Holder B's Account: " << holderBBalance << endl;
}

int main()
{
    int holderAAddr;
    int holderBAddr;
    customerBalance balance;
    balance.holderA = 15;
    balance.holderB = 30;

    int *holderABalance = *balance.holderA;
    int *holderBBalance = *balance.holderB;

    int balanceA = *holderABalance;
    int balanceB = *holderBBalance;

    cout << "Get account holder A address: " << endl;
    cin >> holderAAddr;
    cout << "Get account holder B address: " << endl;
    cin >> holderBAddr;
    cout << getEqShare(holderAAddr, holderBAddr) << endl;
    cout << "Get Customer ID: " << endl;
    getCustID(holderAAddr, holderBAddr);
    getCustBalance(balanceA, balanceB);
}