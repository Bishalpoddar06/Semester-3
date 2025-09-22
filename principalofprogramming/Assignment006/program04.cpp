// Display the diamond pattern using inline function.

#include <iostream>
using namespace std;

class Pattern {
  int n;

 public:
  Pattern(int x) { n = x; }
  inline void diamond();
};

inline void Pattern::diamond() {
  for (int i = 1; i <= n; i++) {
    for (int j = i; j < n; j++) cout << " ";
    for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
    cout << endl;
  }
  for (int i = n - 1; i >= 1; i--) {
    for (int j = i; j < n; j++) cout << " ";
    for (int k = 1; k <= 2 * i - 1; k++) cout << "*";
    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter rows: ";
  cin >> n;
  Pattern p(n);
  p.diamond();
  return 0;
}

/* OUTPUT
Enter rows: 3
  *
 ***
*****
 ***
  *
*/