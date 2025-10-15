/*
WAP in C to implement quene using linked list
*/
// WAP in C to implement Queue using LinkedList

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int value;
  struct Node *next;
};

struct Node *first = NULL;
struct Node *last = NULL;
int length = 0;

void enqueue(int value) {
  struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
  temp->value = value;
  temp->next = NULL;
  if (first == NULL) {
    first = temp;
    last = temp;
  } else {
    last->next = temp;
    last = temp;
    length += 1;
  }
}

struct Node *dequeue() {
  if (length == 0) {
    return NULL;
  }
  struct Node *temp = first;
  if (length == 1) {
    first = NULL;
    last = NULL;
  } else {
    first = first->next;
    temp->next = NULL;
  }
  length -= 1;
  return temp;
}

void printQueue() {
  printf("Queue :-\n");
  struct Node *temp = first;
  if (temp == NULL) {
    printf("Empty\n");
    return;
  }
  while (temp) {
    printf("%d ", temp->value);
    temp = temp->next;
  }
  printf("\n");
}

int main() {
  enqueue(10);
  enqueue(20);

  printQueue();

  enqueue(30);

  printQueue();

  struct Node *temp = dequeue();
  if (temp != NULL) {
    printf("Dequeued : %d\n", temp->value);
  }

  printQueue();

  temp = dequeue();
  if (temp != NULL) {
    printf("Dequeued : %d\n", temp->value);
  }

  return 0;
}

/* OUTPUT
Queue :-
10 20
Queue :-
10 20 30
Dequeued : 10
Queue :-
20 30
Dequeued : 20
*/