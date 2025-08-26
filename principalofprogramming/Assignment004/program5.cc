/*Write a C++ program to find the factorial of a number.
 */
#include <iostream>
using namespace std;

long long factorial(int n)
{
    if (n < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1;
    }

    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

long long factorialRecursive(int n)
{
    if (n < 0)
        return -1;
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursive(n - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        long long result = factorial(num);
        cout << "Factorial of " << num << " (iterative) = " << result << endl;

        long long recursiveResult = factorialRecursive(num);
        cout << "Factorial of " << num << " (recursive) = " << recursiveResult << endl;
    }

    return 0;
}

/*Enter a number:5
 Factorial of 5 (iterative) = 120
Factorial of 5 (recursive) = 120
*/