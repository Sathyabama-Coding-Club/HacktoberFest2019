#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int top = -1;
int stack[MAX];
void push();
void pop();
void display();

int main() {
    int choice;
    while(1) {
        printf("Enter choice\n 1.push\n 2.pop\n 3.display\n");
        scanf("%d",&choice);
        switch(choice) {
            case 1 : push();
                     break;
            case 2 : pop();
                     break;
            case 3 : display();
                     break;
            case 4 : exit(0);
        }
    }
    return 0;
}

void push() {
    int element;
    printf("Enter an element to push\n");
    scanf("%d",&element);
    if(top >= MAX - 1) {
        printf("stack is full cannot push\n");
    } else {
        top = top + 1;
        stack[top] = element;
    }
    
}

void pop() {
    if (top <= -1) {
        printf("stack is empty,cannot be deleted\n");
    } else {
        printf("deleted element is %d\n",stack[top]);
        top = top - 1;
    }
}

void display() {
    if(top == -1) {
        printf("stack is empty\n");
    } else {
        for(int i = 0; i <= top; i++) {
            printf("%d\n",stack[i]);
        }
    }
}

