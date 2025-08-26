// Redo the above program using class called Numbers and appropriate member
// functions.

#include <iostream>
using namespace std;

class Numbers {
private:
    int a, b;
public:
    void input() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }
    void display() {
        cout << "First number: " << a << endl;
        cout << "Second number: " << b << endl;
    }
    int sum() {
        return a + b;
    }
};

int main() {
    Numbers num;
    num.input();
    num.display();
    cout << "Sum: " << num.sum() << endl;
    return 0;
}

/*Enter two numbers:25, 17
 First number: 25
Second number: 17
Sum: 42*/