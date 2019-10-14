/* The following program is the implementation of the Stack Data Structure using Arrays on C-Programming Languages with basic operations
like Push, Pop, Display and Peek performed on the Stack. */

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

int a[100], top = -1;
void push();
void pop();
void peek();
void display();
void main() {
  int ch;
  clrscr();
  do {
    printf("1. Perform Push Operation\n2. Perform Pop Operation\n3. Perform Peek Operation\n4. Perform Display Operation\n5.Exit\n");
    scanf("%d", & ch);
    switch (ch) {
    case 1:
      push();
      break;
    case 2:
      pop();
      break;
    case 3:
      peek();
      break;
    case 4:
      display();
      break;
    case 5:
      exit(0);
    }
  } while (ch <= 5);
  getch();
}
void push() {
  int new1;
  if (top == 99) {
    printf("The stack is full \n");
  } else {
    printf("Enter the element to insert \n");
    scanf("%d", & new1);
    top = top + 1;
    a[top] = new1;
  }
}
void pop() {
  if (top == -1) {
    printf("The stack is empty \n");
  } else {
    printf("The deleted element is %d \n", a[top]);
    top--;
  }
}
void peek() {
  if (top == -1) {
    printf("The stack is empty \n");
  } else {
    printf("The peek element is %d \n", a[top]);
  }
}
void display() {
  int i;
  if (top == -1) {
    printf("Stack is empty \n");
  } else {
    for (i = top; i >= 0; i--) {
      printf("The stack elements are %d \n", a[i]);
    }
  }
}
