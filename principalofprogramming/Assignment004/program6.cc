/*Redo the above program using a class called factorial and appropriate member
functions.
*/
#include <iostream>
using namespace std;

class Factorial
{
private:
    int number;

public:
    Factorial()
    {
        number = 0;
    }

    Factorial(int n)
    {
        number = n;
    }

    void input()
    {
        cout << "Enter a number: ";
        cin >> number;
    }

    long long calculateIterative()
    {
        if (number < 0)
        {
            return -1; // Error case
        }

        long long fact = 1;
        for (int i = 1; i <= number; i++)
        {
            fact *= i;
        }
        return fact;
    }

    long long calculateRecursive(int n = -1)
    {

        if (n == -1)
            n = number;

        if (n < 0)
            return -1; // Error case
        if (n == 0 || n == 1)
            return 1;
        return n * calculateRecursive(n - 1);
    }

    void displayResult()
    {
        if (number < 0)
        {
            cout << "Factorial is not defined for negative numbers." << endl;
            return;
        }

        long long iterativeResult = calculateIterative();
        long long recursiveResult = calculateRecursive();

        cout << "Factorial of " << number << " (iterative) = " << iterativeResult << endl;
        cout << "Factorial of " << number << " (recursive) = " << recursiveResult << endl;
    }

    int getNumber()
    {
        return number;
    }

    void setNumber(int n)
    {
        number = n;
    }

    bool isValidNumber()
    {
        return number >= 0;
    }
};

int main()
{
    Factorial factObj;
    factObj.input();
    factObj.displayResult();
    return 0;
}

/*
Enter a number:6
Factorial of 6 (iterative) = 720
Factorial of 6 (recursive) = 720
*/
