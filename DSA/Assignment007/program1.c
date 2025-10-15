// WAP in C to implement stack using Linked List

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *top = NULL;

void push(int value) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->value = value;
  temp->next = top;
  top = temp;
}

struct Node *pop() {
  if (top == NULL) {
    printf("Stack Underflow");
    return NULL;
  }
  struct Node *temp = top;
  top = top->next;
  temp->next = NULL;
  return temp;
}

int peek() {
  if (top == NULL) {
    return -9999;
  }
  return top->value;
}

void display() {
  printf("Stack :-\n");
  struct Node *temp = top;
  if (temp == NULL) {
    printf("Empty\n");
    return;
  }
  while (temp) {
    printf("%d\n", temp->value);
    temp = temp->next;
  }
}

int main() {
  push(10);
  push(20);
  push(30);

  display();

  printf("Peek : %d\n", peek());

  struct Node *popped = pop();
  if (popped != NULL) {
    printf("Popped Item : %d\n", popped->value);
    free(popped);
  }

  display();

  printf("Peek : %d\n", peek());

  return 0;
}

/* OUTPUT
Stack :-
30
20
10
Peek : 30
Popped Item : 30
Stack :-
20
10
Peek : 20
*/