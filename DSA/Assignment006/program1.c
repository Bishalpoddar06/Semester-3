// WAP in C to reverse a string using stack.

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
  char str[MAX], stack[MAX];
  int top = -1, i;

  printf("Enter a string: ");
  fgets(str, MAX, stdin);
  // Remove newline if present    
  str[strcspn(str, "\n")] = '\0';

  // Push all characters to stack
  for (i = 0; str[i] != '\0'; i++) {
    stack[++top] = str[i];
  }

  printf("Reversed string: ");
  // Pop all characters from stack
  while (top >= 0) {
    putchar(stack[top--]);
  }
  printf("\n");
  return 0;
}

/* OUTPUT
Enter a string: DSA
Reversed string: ASD
*/