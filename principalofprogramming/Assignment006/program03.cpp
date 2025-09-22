// Print the pattern of right-angled triangle using friend function 

#include <iostream>
using namespace std;

class Pattern {
  int n;

 public:
  Pattern(int x) { n = x; }
  friend void print(Pattern p);
};

void print(Pattern p) {
  for (int i = 1; i <= p.n; i++) {
    for (int j = 1; j <= i; j++) cout << "* ";
    cout << endl;
  }
}

int main() {
  int n;
  cout << "Enter rows: ";
  cin >> n;
  Pattern p(n);
  print(p);
  return 0;
}

/* OUTPUT
Enter rows: 3
*
* *
* * *
*/