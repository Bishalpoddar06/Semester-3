// WAP in C to reverse a number using stack.

#include <stdio.h>
#define MAX 10

int stack[MAX];
int top = -1;

void push(int digit) {
  if (top == MAX - 1) {
    printf("Stack overflow!\n");
    return;
  }
  stack[++top] = digit;
}

int pop() {
  if (top == -1) {
    printf("Stack underflow!\n");
    return -1;
  }
  return stack[top--];
}

int main() {
  int num, reversed = 0;

  printf("Enter a number: ");
  scanf("%d", &num);

  int temp = num;
  while (temp > 0) {
    push(temp % 10);
    temp /= 10;
  }

  int place = 1;
  while (top != -1) {
    reversed += pop() * place;
    place *= 10;
  }

  printf("Original number: %d\n", num);
  printf("Reversed number: %d\n", reversed);

  return 0;
}
/*
---OUTPUT---
Enter a number: 435
Original number: 435
Reversed number: 534
*/