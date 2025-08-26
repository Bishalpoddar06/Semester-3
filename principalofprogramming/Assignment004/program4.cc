/*Redo the above program using a class called prime and appropriate member functions.
 */
#include <iostream>
#include <cmath>
using namespace std;

class Prime
{
private:
    int number;

public:
    Prime()
    {
        number = 0;
    }

    void input()
    {
        cout << "Enter a number: ";
        cin >> number;
    }

    bool checkPrime()
    {

        if (number <= 1)
            return false;
        if (number <= 3)
            return true;
        if (number % 2 == 0 || number % 3 == 0)
            return false;

        for (int i = 5; i * i <= number; i += 6)
        {
            if (number % i == 0 || number % (i + 2) == 0)
                return false;
        }
        return true;
    }

    void displayResult()
    {
        if (checkPrime())
        {
            cout << number << " is a prime number." << endl;
        }
        else
        {
            cout << number << " is not a prime number." << endl;
        }
    }

    int getNumber()
    {
        return number;
    }

    void setNumber(int n)
    {
        number = n;
    }
};

int main()
{
    Prime primeObj;
    primeObj.input();
    primeObj.displayResult();
    return 0;
}

/*Enter a number: 29
is a prime number.

Enter a number: 15
is not a prime number.

Enter a number: 97
is a prime number.
*/