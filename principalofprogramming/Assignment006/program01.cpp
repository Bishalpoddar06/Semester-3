// Use friend function to calculate the average of two numbers.

#include <iostream>
using namespace std;

class Numbers {
 private:
  float num1, num2;

 public:
  Numbers(float a, float b) {
    num1 = a;
    num2 = b;
  }

  friend float calculateAverage(Numbers n);
};

float calculateAverage(Numbers n) { return (n.num1 + n.num2) / 2; }

int main() {
  Numbers obj(10.5, 20.5);

  cout << "Average = " << calculateAverage(obj) << endl;

  return 0;
}

/* OUTPUT
Average = 15.5
*/