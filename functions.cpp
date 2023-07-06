#include <iostream>
#include <string>

using namespace std;

int doWhileIterative(int end) // Int - Return type of a function; iterative - Func name
{
    int start = 0;
Iter:
    do
    {
        cout << "Started Iteration after prefix from: " << start << endl;
        start = start + 1;
        goto Iter; // Goto jumps only within the same function; But Goto is a bad practice so it's not recommended
    } while (start < end);

    return start;
}

int whileIterative(int start, int end)
{
    while (start < end)
    {
        cout << "Started Iteration at: " << start << endl;
        // cout << "End Iteration at: " << end << endl;
        start++;
    }
    return start;
}

int main()
{
    int start;
    int end;
    cout << "Enter Start Iteration Index: " << endl;
    cin >> start;
    cout << "Enter End Iteration Index: " << endl;
    cin >> end;
    cout << "Do-While: " << endl;
    cout << doWhileIterative(end) << endl;
    cout << "While: " << endl;
    cout << whileIterative(start, end) << endl;
}