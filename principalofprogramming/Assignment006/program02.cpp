// Perform the addition of 2 matrices using friend function.

#include <iostream>
using namespace std;

class Matrix {
  int a[10][10], r, c;

 public:
  Matrix(int x = 0, int y = 0) {
    r = x;
    c = y;
  }

  void input() {
    for (int i = 0; i < r; i++)
      for (int j = 0; j < c; j++) cin >> a[i][j];
  }

  void display() {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) cout << a[i][j] << " ";
      cout << endl;
    }
  }

  friend Matrix add(Matrix m1, Matrix m2);
};

Matrix add(Matrix m1, Matrix m2) {
  Matrix t(m1.r, m1.c);
  for (int i = 0; i < m1.r; i++)
    for (int j = 0; j < m1.c; j++) t.a[i][j] = m1.a[i][j] + m2.a[i][j];
  return t;
}

int main() {
  int r, c;
  cout << "Enter rows and cols: ";
  cin >> r >> c;

  Matrix m1(r, c), m2(r, c);
  cout << "Enter Matrix 1:\n";
  m1.input();
  cout << "Enter Matrix 2:\n";
  m2.input();

  Matrix res = add(m1, m2);

  cout << "\nResult:\n";
  res.display();
  return 0;
}

/* OUTPUT
Enter rows and cols: 2 2
Enter Matrix 1:
1 2 3 4
Enter Matrix 2:
4 3 2 1

Result:
5 5
5 5
*/