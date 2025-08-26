/*Write a C++ program to find the maximum of 3 numbers*/
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    int maxNum = a;
    if (b > maxNum) maxNum = b;
    if (c > maxNum) maxNum = c;

    cout << "The maximum number is: " << maxNum << endl;
    return 0;
}

/*Enter three numbers:15, 8, 23
The maximum number is: 23
*/