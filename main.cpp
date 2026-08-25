#include <iostream>
using namespace std;

int fibIterative(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    int prev2 = 0;   // T(0)
    int prev1 = 1;   // T(1)
    int current = 0;

    for (int i = 2; i <= n; i++)
    {
        current = prev2 + prev1;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Fibonacci sequence up to T(" << n << "):" << endl;
    for (int i = 0; i <= n; i++)
    {
        cout << "T(" << i << ") = " << fibIterative(i) << endl;
    }

    return 0;
}
